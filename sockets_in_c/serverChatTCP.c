//basic header files
#include <stdio.h> //contains declarations used for input and output, Eg: printf,scanf, etc
#include <stdlib.h>//4 vars, several macros & general utility functions
#include <string.h>
//system header
#include <unistd.h>
//system header files?
#include <sys/types.h>//contains definitions of a number of data types used in sys calls
#include <sys/socket.h>//includes a number of definitions of structs needed for sockets
#include <netinet/in.h>//consts and structs needed for internet domain addresses

void error(const char *msg){
	perror(msg);
	exit(1);

}

int main(int argc, char *argv[]){
	int sockfd, newsockfd,portno,n;
	socklen_t clilen;
	char buffer[255];
	struct sockaddr_in serv_addr,cli_addr;
	if(argc<2){
		fprintf(stderr,"ERROR, no port provided\n");
		exit(1);
	}
	sockfd =socket(AF_INET, SOCK_STREAM,0);
	
	if(sockfd<0){
		error("ERROR opening socket");
	}
	printf("Client: ");
	bzero((char *) &serv_addr,sizeof(serv_addr));//clears data giving to it?
	portno=atoi(argv[1]);
	serv_addr.sin_family=AF_INET;
	serv_addr.sin_addr.s_addr=INADDR_ANY;
	serv_addr.sin_port=htons(portno);
	if(bind(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr))<0){
		error("Binding Failed\n.");

	}
	listen(sockfd, 5);
	clilen =sizeof(cli_addr);
	newsockfd = accept(sockfd,(struct sockaddr *) &cli_addr, &clilen);
	if(newsockfd <0){
		error("Error on Accept");
	}
	while(1){
		bzero(buffer,255);
		n = read(newsockfd,buffer,255);
		if(n<0){
			error("Error on reading.");	
		}
		printf("Client: %s",buffer);
		bzero(buffer,255);
		fgets(buffer,255,stdin);
		n = write(newsockfd,buffer,strlen(buffer));
		if(n<0){
			error("Error on Writing.");
		}
		int i = strncmp("Bye",buffer,3);
		if(i==0)
			break;

	}
	close(newsockfd);
	close(sockfd);
		//printf("Server: %s\n",buffer);
		//int i = strncmp("Byte",buffer, 3);
		//if(i ==0)


}
