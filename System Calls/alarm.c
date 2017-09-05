#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void sig_alarm(int signo)
{
	if(signo==SIGALRM) {
		printf("Got SIGALRM\n");
		alarm(10);
		printf("%s: Will generate alarm in 10 secs\n",__FUNCTION__);
	} else {
		printf("Unknown signal number\n");
	}
}

int main(void)
{
	struct sigaction act;
	act.sa_handler = sig_alarm;
	act.sa_flags = 0;
	sigemptyset(&act.sa_mask);
	if (sigaction (SIGALRM, &act, 0) == -1) {
		perror (NULL);
		return 1; 
	}
	alarm (10);
	printf ("%s: Will generate alarm in 10 secs\n",__FUNCTION__);
	while(1) pause();
	return 0; 
}
