#include <stdio.h>
#include <time.h>

int main (void)
{
	time_t	t0;
	int		i = 7;
	int		y;
	
	t0 = time(NULL);
	while (i > 0) {
		i--;
		y = 0xFFFFFFF;
		while (y > 0)
			y--;
	}
	
	printf("Executed in %lf seconds.\n", difftime(time(NULL), t0));
	
	return 0;
}
