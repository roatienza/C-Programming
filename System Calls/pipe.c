#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
	pid_t 	childpid;
	int fd[2];
	char buf[10] = "Bye";
	
	//fd[0] is for reading
	//fd[1] is for writing
	if (pipe(fd) < 0){
		return 1;
	}
	
	childpid=fork();
	if (childpid > 0){
		//parent
		write(fd[1],"Hello",sizeof("Hello"));
	}else if (childpid == 0){
		//child
		read(fd[0],buf,sizeof(buf));
	}

	printf("CHILD PID = %d , buf = %s \n", childpid, buf);

	return 0;
}

