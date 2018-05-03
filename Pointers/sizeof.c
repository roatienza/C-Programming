#include <stdio.h>
#include <string.h>

int main()
{
	int *pi = 0;
	char *pc = 0;
	double *pd = 0;

	printf("sizeof(pi) = %lu\n", sizeof(pi));
	printf("sizeof(pc) = %lu\n", sizeof(pc));
	printf("sizeof(pd) = %lu\n", sizeof(pd));
	return 0;
}
