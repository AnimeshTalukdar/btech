#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define WINDOW_SIZE 4
#define PACKET_SIZE 1024

void sendPacket(int sockfd, struct sockaddr_in addr, int packetNum, int *window, int *ackReceived)
{
    char packet[PACKET_SIZE];
    sprintf(packet, "Packet %d", packetNum);

    sendto(sockfd, packet, strlen(packet), 0, (struct sockaddr *)&addr, sizeof(addr));
    printf("Sent Packet %d\n", packetNum);

    window[packetNum % WINDOW_SIZE] = 1;
    *ackReceived = 0;
}

void receiveAcknowledgement(int sockfd, struct sockaddr_in addr, int *window, int *ackReceived)
{
    char ack[PACKET_SIZE];
    socklen_t addrLen = sizeof(addr);

    if (recvfrom(sockfd, ack, PACKET_SIZE, 0, (struct sockaddr *)&addr, &addrLen) > 0)
    {
        int ackNum = atoi(ack);
        printf("Received ACK %d\n", ackNum);

        if (window[ackNum % WINDOW_SIZE] == 1)
        {
            window[ackNum % WINDOW_SIZE] = 0;
            *ackReceived = 1;
        }
    }
    else
    {
        int nackNum = atoi(ack + 1);
        printf("Received NACK %d\n", nackNum);

        if (window[nackNum % WINDOW_SIZE] == 1)
        {
            sendPacket(sockfd, addr, nackNum, window, ackReceived);
        }
    }
}

int main()
{
    int sockfd;
    struct sockaddr_in senderAddr, receiverAddr;
    int window[WINDOW_SIZE] = {0};
    int packetNum = 0;
    int ackReceived = 1;

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);

    memset(&senderAddr, 0, sizeof(senderAddr));
    senderAddr.sin_family = AF_INET;
    senderAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    senderAddr.sin_port = htons(12345);

    memset(&receiverAddr, 0, sizeof(receiverAddr));
    receiverAddr.sin_family = AF_INET;
    receiverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    receiverAddr.sin_port = htons(54321);

    bind(sockfd, (struct sockaddr *)&senderAddr, sizeof(senderAddr));

    while (1)
    {
        if (packetNum < packetNum + WINDOW_SIZE && ackReceived)
        {
            sendPacket(sockfd, receiverAddr, packetNum, window, &ackReceived);
            packetNum++;
        }

        receiveAcknowledgement(sockfd, receiverAddr, window, &ackReceived);

        if (packetNum >= 10 && ackReceived)
            break;
    }

    close(sockfd);

    return 0;
}
