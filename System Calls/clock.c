#include <stdio.h>
#include <time.h>

int main (void)
{
	int	i = 0;
	int y = 0;
	struct timespec t0,t1;
	
	clock_gettime(CLOCK_REALTIME, &t0);
	while (i > 0) {
		i--;
		y = 0xFFFFFFF;
		while (y > 0)
			y--;
	}
	clock_gettime(CLOCK_REALTIME, &t1);
	printf ("%lf nsecs elapsed \n", (t1.tv_sec-t0.tv_sec) + (t1.tv_nsec-t0.tv_nsec)*1e-9);
	return 0;
}
