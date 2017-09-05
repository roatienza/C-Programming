#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void sig_usr(int signo){
	if(signo==SIGINT)
		printf("Got SIGINT\n");
	else
		printf("Unknown signal number\n");
}

int main(void)
{
	struct sigaction sa;
	sa.sa_handler = sig_usr;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	if(sigaction(SIGINT, &sa, NULL) == -1) { 
		printf("Error creating SIG_INT\n"); 
		return 1;
	}
	pause();
	return 0;
}
