#include <stdio.h>
#include <time.h>

int main (void)
{
	time_t 	t0;
	
	t0 = time (NULL);
	printf ("%s", asctime(localtime(&t0)));
	return 0;
}	
