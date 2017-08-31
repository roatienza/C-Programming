#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int fd;
	unsigned int 	random;

	fd = open("/dev/urandom", O_RDONLY);
	if( fd<0 ){
		return 1;
	}
	read(fd, &random, sizeof(random));
	printf("Random #: %u\n", random);
	close(fd);

	return 0;
}
