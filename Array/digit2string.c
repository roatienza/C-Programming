#include <stdio.h>

int main()
{
	int n = 0;
	char a[][6] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	scanf("%d",&n);
	puts(a[n]);
	return 0;
}
