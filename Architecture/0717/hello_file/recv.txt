#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void error_handling(char *message);


int main(int argc, char* argv[])
{
	int sock;
	struct sockaddr_in serv_addr;
	char message[30];
	int str_len;
	char buf[100];
	int rfd,wfd;

	if(argc!=4){
		printf("Usage : %s <IP> <port> <file>\n",argv[0]);
		exit(1);
	}
	sock =socket(PF_INET, SOCK_STREAM,	0);
	if(sock < 0)
		 error_handling("socket() error");

	memset(&serv_addr, 0, sizeof(serv_addr));
	serv_addr.sin_family =AF_INET;
	serv_addr.sin_addr.s_addr = inet_addr(argv[1]);
	serv_addr.sin_port = htons(atoi(argv[2]));

	if(connect(sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0)
			error_handling("connect() error!");

	rfd = open(argv[3],O_RDONLY);

	while(1){
		str_len = read(rfd,buf,sizeof(buf));
		write(sock,buf,str_len);
		if(str_len ==0){
				printf("Done...\n");
				close(sock);
				break;
		}
	}


	return 0;

}
void error_handling(char *message)
{
        fputs(message, stderr);
	     fputc('\n', stderr);
	     exit(1);
}

