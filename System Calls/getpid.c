#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid = getpid();
	printf("My PID = %d\n",pid);
	printf("My Parent PID = %d\n",getppid());
	return 0;
}
