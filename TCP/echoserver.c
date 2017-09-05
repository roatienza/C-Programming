#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include <unistd.h>
#include <arpa/inet.h>


int main(int argc, char **argv)
{
  int sockfd,acceptfd;
  struct sockaddr_in servaddr,cliaddr;
  socklen_t len = sizeof(cliaddr);
  char cli_ip[32];
  char mesg[1024];

  sockfd = socket(PF_INET,SOCK_STREAM,0);
  if(sockfd<0) {
	perror("socket: ");
	return -EIO;
  }

  memset(&servaddr, 0,sizeof(servaddr));
  servaddr.sin_family = AF_INET;
  servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
  servaddr.sin_port = htons(54321);
  if ( bind( sockfd, (struct sockaddr*) &servaddr, sizeof(servaddr) ) < 0 ){
	perror("bind: ");
	close(sockfd);
	return -EIO;
  }

  //not present in udp server
  if(listen(sockfd,2)<0){
	perror("listen: ");
	close(sockfd);
	return -EIO;
  }
  
  while(1){
	  //not present in udp server
	if( (acceptfd = accept(sockfd,(struct sockaddr *)&cliaddr,&len)) < 0 ){
		perror("accept: ");
		continue;
	}
	inet_ntop(AF_INET,(struct in_addr *) &cliaddr.sin_addr, cli_ip, sizeof(cli_ip) );
	printf("Client %s connected. \n",cli_ip);	  
	while(1){
	  memset(mesg,0,sizeof(mesg));
  	  if( recvfrom(acceptfd,mesg,sizeof(mesg),0,(struct sockaddr *)&cliaddr,&len) > 0 ){
            printf("From %s port %d: %s",cli_ip,ntohs(cliaddr.sin_port),mesg);
	  }
	  else {
	    close(acceptfd);
	    printf("Client %s disconnected. \n",cli_ip);	  
	    break;
	  }
	}
	close(acceptfd);
  }
  close(sockfd);
  return 0;
}
