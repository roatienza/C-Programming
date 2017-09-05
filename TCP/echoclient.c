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
  int sockfd;
  struct sockaddr_in servaddr;
  socklen_t len = sizeof(servaddr);
  char mesg[1024];

  if(argc!=2){ 
	printf("Usage: %s <ip_addr>\n",argv[0]);
	return -EINVAL; 
  }

  sockfd = socket(PF_INET,SOCK_STREAM,0);
  if(sockfd<0) {
	perror("socket: ");
	return -EIO;
  }

  bzero(&servaddr, sizeof(servaddr));
  servaddr.sin_family = AF_INET;
  servaddr.sin_port = htons(54321);
  inet_pton(AF_INET,argv[1],&servaddr.sin_addr);

  //not present in udp clients
  if(connect(sockfd,(struct sockaddr *)&servaddr,sizeof(servaddr))<0){
	perror("connect: ");
	close(sockfd);
	return -EIO;
  }

  while(1){
	fgets(mesg,sizeof(mesg),stdin);
  	sendto(sockfd,mesg,strlen(mesg),0,(const struct sockaddr *)&servaddr,len);
  }
  close(sockfd);
  return 0;
}
