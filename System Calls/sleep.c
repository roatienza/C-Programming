#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main (void)
{
	time_t	t0;
	
	t0 = time(NULL);

	/* Better than loop */
	sleep(2);
	
	printf("Executed in %lf seconds.\n", difftime(time(NULL), t0));
	
	return 0;
}
