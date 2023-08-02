#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define WINDOW_SIZE 4
#define PACKET_SIZE 1024

typedef struct
{
    int seqNum;
    int isACK;
    char data[PACKET_SIZE];
} Packet;

void sendAcknowledgement(int sockfd, struct sockaddr_in addr, int ackNum)
{
    Packet packet;
    packet.seqNum = ackNum;
    packet.isACK = 1;

    sendto(sockfd, &packet, sizeof(packet), 0, (struct sockaddr *)&addr, sizeof(addr));
    printf("Sent ACK %d\n", ackNum);
}

void sendNegativeAcknowledgement(int sockfd, struct sockaddr_in addr, int nackNum)
{
    Packet packet;
    packet.seqNum = nackNum;
    packet.isACK = 0;

    sendto(sockfd, &packet, sizeof(packet), 0, (struct sockaddr *)&addr, sizeof(addr));
    printf("Sent NACK %d\n", nackNum);
}

void receivePacket(int sockfd, struct sockaddr_in addr, int *window, int expectedPacket)
{
    Packet packet;
    socklen_t addrLen = sizeof(addr);

    if (recvfrom(sockfd, &packet, sizeof(packet), 0, (struct sockaddr *)&addr, &addrLen) > 0)
    {
        if (packet.seqNum == expectedPacket)
        {
            printf("Received Packet %d\n", expectedPacket);
            sendAcknowledgement(sockfd, addr, expectedPacket);
            window[expectedPacket % WINDOW_SIZE] = 1;
        }
        else
        {
            printf("Received Out-of-order Packet %d\n", packet.seqNum);
            sendNegativeAcknowledgement(sockfd, addr, expectedPacket - 1);
        }
    }
}

int main()
{
    int sockfd;
    struct sockaddr_in senderAddr, receiverAddr;
    int window[WINDOW_SIZE] = {0};
    int expectedPacket = 0;

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);

    memset(&senderAddr, 0, sizeof(senderAddr));
    senderAddr.sin_family = AF_INET;
    senderAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    senderAddr.sin_port = htons(12345);

    memset(&receiverAddr, 0, sizeof(receiverAddr));
    receiverAddr.sin_family = AF_INET;
    receiverAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    receiverAddr.sin_port = htons(54321);

    bind(sockfd, (struct sockaddr *)&receiverAddr, sizeof(receiverAddr));

    while (1)
    {
        receivePacket(sockfd, senderAddr, window, expectedPacket);

        if (window[expectedPacket % WINDOW_SIZE] == 1)
        {
            window[expectedPacket % WINDOW_SIZE] = 0;
            expectedPacket++;
        }

        if (expectedPacket >= 10)
            break;
    }

    close(sockfd);

    return 0;
}
