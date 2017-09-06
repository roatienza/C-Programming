#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
int main(void)
{
	char buffer[128];
	char fifoname[] = "myfifo";
	int fifofd;
	/* SAMPLE only, no checking */	

	/* no FIFO creation */	

	fifofd = open(fifoname, O_RDONLY);

	printf("Reading FIFO:\n");
	do {
		read(fifofd, buffer, sizeof(buffer));
		printf("%s", buffer);
	} while (strcmp(buffer,"exit\n") != 0);
	
	close(fifofd);
	return 0;
}  
