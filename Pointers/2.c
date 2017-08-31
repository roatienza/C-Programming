#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0x12345678;
	char *pi = &i;
	printf("*pi = 0x%x\n", *pi);
	return 0;
}
