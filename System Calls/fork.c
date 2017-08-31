#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main()
{
	pid_t cid;
	int a = 0;

	if ( (cid=fork())>0 ) {
		a++;
		printf("Parent : a=%d\n",a);
		printf("Parent : My Child PID = %d\n",cid);
		printf("Parent : My PID = %d\n",getpid());	
		wait(NULL);
		printf("Parent : child done\n");
		puts("Parent : DONE");
	}else{
		printf("Child : a=%d\n",a);
		printf("Child : My PID = %d\n",getpid());	
		printf("Child : My Parent PID = %d\n",getppid());	
		sleep(1);
	}
	return 0;
}
