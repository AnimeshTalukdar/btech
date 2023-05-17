#include <stdio.h>
#include <unistd.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>	//For gethostbyname function

void error(char* msg){
    perror(msg);
    exit(1);
}

int main(int argc, char *argv[]){
    if(argc<3){
        fprintf(stderr,"No port provided\n");
        exit(1);
    }	
    int sockfd, portno, n;	
    char buffer[255];	

    struct sockaddr_in serv_addr;	
    struct hostent* server;

    portno = atoi(argv[2]);
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if(sockfd<0){
        error("Socket failed \n");
    }

    server = gethostbyname(argv[1]);
    if(server == NULL){
        error("No such host\n");
    }

    bzero((char*) &serv_addr, sizeof(serv_addr));	
    serv_addr.sin_family = AF_INET;	
    bcopy((char*) server->h_addr, (char*) &serv_addr.sin_addr.s_addr, server->h_length);	
    serv_addr.sin_port = htons(portno);

    if(connect(sockfd, (struct sockaddr*) &serv_addr, sizeof(serv_addr))<0)	
        error("Connection failed\n");

    while(1){
        bzero(buffer, 256);
        printf("Me: ");
        fgets(buffer, 255, stdin);
        n = write(sockfd, buffer, strlen(buffer));	
        if(n<0)
            error("Error writing to server\n");
        n = read(sockfd, buffer, 255);	
        if(n<0)
            error("Error reading from Server");
        printf("Server : %s \n", buffer);
        if(strncmp(buffer, "Bye", 3) == 0)
            break;
    }

    return 0;
}
