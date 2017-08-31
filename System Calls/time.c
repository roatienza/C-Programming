#include <stdio.h>
#include <time.h>

int main (void)
{
	time_t 	t0;
	
	t0 = time (NULL);
	printf("%lu sec since epoch\n", t0);
	printf("%s\n", ctime(&t0));
	return 0;
}	
