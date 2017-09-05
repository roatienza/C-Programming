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
	if( signal(SIGINT, sig_usr) == SIG_ERR ) { 
		printf("Error creating SIG_INT\n"); 
		return 1;
	}
	pause();
	return 0;
}
