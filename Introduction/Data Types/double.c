#include <stdio.h>
#include <float.h>

int main()
{
	printf("sizeof(float) = %lu\n",sizeof(float));
	printf("sizeof(double) = %lu\n",sizeof(double));
	printf("sizeof(long double) = %lu\n",sizeof(long double));
	printf("Max of float = %f\n",FLT_MAX);
	return 0;
}
