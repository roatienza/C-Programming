#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>


void childprocess(char *buf)
{
	int counter = 0;
	while(1) {
		printf("Message %d: %s\n", counter, buf);
		counter++;
		sleep(2);
	}
}

int main(void)
{
	pid_t	id;	/* Holds PID of current child */
	int		number;
	id = fork();
	if (id == 0) {
		childprocess("Enter a number");
		return 0;
	}
	/* Parent process */
	while(1) {
		scanf("%d", &number);
		if (number == 123)
			break;
		printf("Try again\n");
	}
	kill(id, SIGUSR1);	/* terminate repeating message */
	printf("Finally!\n");
	return 0;	
}
