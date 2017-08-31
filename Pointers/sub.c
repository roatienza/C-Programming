#include <stdio.h>

int main()
{
	int a[] = { 1, 2, 3 };
	int *p1 = &a[0];
	int *p2 = &a[1];
	int c = p2 - p1;
	return 0;
}
