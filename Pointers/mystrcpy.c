#include <stdio.h>
#include <string.h>

void mystrcpy(char*a, char*b)
{
	while( (*(a++) = *(b++)) ){}	
}

int main()
{
	char a[32];
	char b[32];
	fgets(b, sizeof(b), stdin);
	mystrcpy(a,b);
	puts(a);
	return 0;
}
