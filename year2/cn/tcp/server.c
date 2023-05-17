#include <stdio.h>
#include <unistd.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>

void error(char* msg){
    perror(msg);
    exit(1);
}

int main(int argc, char *argv[]){
    if(argc<2){
        fprintf(stderr,"No port provided\n");
        exit(1);
    }	
    int sockfd, newsockfd, portno, n;	
    char buffer[255];	

    struct sockaddr_in serv_addr,cli_addr;	
    socklen_t cli_len;	

    sockfd = socket(AF_INET, SOCK_STREAM, 0);	
    if(sockfd<0){
        error("Socket failed \n");
    }
    bzero((char*) &serv_addr,sizeof(serv_addr));	
    portno = atoi(argv[1]);

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;	
    serv_addr.sin_port = htons(portno);	

    if(bind(sockfd, (struct sockaddr*) &serv_addr,sizeof(serv_addr))<0){	
        error("Binding failed\n");
    }

    listen(sockfd, 5);
    cli_len = sizeof(cli_addr);

    newsockfd = accept(sockfd, (struct sockaddr*) &cli_addr, &cli_len);

    if(newsockfd<0)
        error("error accepting new connection \n");

    while(1){
        bzero(buffer, 256);
        n = read(newsockfd, buffer, 255);	
        if(n<0)
            error("Error reading from Client");
        printf("Client : %s \n", buffer);
        bzero(buffer, 255);
        printf("Server :");
        fgets(buffer, 255, stdin);
        n = write(newsockfd, buffer, strlen(buffer));
        if(n<0)
            error("Error writing to server\n");
        if(strncmp(buffer, "Bye", 3) == 0)
            break;
    }

    close(sockfd);
    close(newsockfd);
    return 0;
}
