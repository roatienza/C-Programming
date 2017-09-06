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
	mkfifo(fifoname, S_IRUSR | S_IWUSR);

	fifofd = open(fifoname, O_WRONLY);

	printf("Type in 'exit' to quit:\n");
	do {
		fgets(buffer, sizeof(buffer), stdin);
		write(fifofd, buffer, strlen(buffer)+1 );
	} while (strcmp(buffer,"exit\n") != 0);
	
	close(fifofd);
	unlink(fifoname);
	return 0;
}  
