#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define WINDOW_SIZE 4
#define PACKET_SIZE 1024

void sendAcknowledgement(int sockfd, struct sockaddr_in addr, int ackNum)
{
    char ack[PACKET_SIZE];
    sprintf(ack, "%d", ackNum);

    sendto(sockfd, ack, strlen(ack), 0, (struct sockaddr *)&addr, sizeof(addr));
    printf("Sent ACK %d\n", ackNum);
}

void receivePacket(int sockfd, struct sockaddr_in addr, int *window, int expectedPacket)
{
    char packet[PACKET_SIZE];
    socklen_t addrLen = sizeof(addr);

    if (recvfrom(sockfd, packet, PACKET_SIZE, 0, (struct sockaddr *)&addr, &addrLen) > 0)
    {
        int packetNum = atoi(packet + 7);

        if (packetNum == expectedPacket)
        {
            printf("Received Packet %d\n", packetNum);
            sendAcknowledgement(sockfd, addr, packetNum);
            window[packetNum % WINDOW_SIZE] = 1;
        }
        else
        {
            printf("Received Out-of-order Packet %d\n", packetNum);
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
    senderAddr.sin_addr.s_addr = inet_addr("192.168.0.240");
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
