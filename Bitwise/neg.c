#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d",&a);
	printf("-%d = %d\n",a, ~a + 1);

	return 0;
}
