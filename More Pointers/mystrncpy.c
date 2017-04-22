#include <stdio.h>
#include <string.h>

void mystrncpy(char* dest, char* src, int len)
{
	memcpy(dest, src, len+1);
}

int main()
{
	char a[] = "Hello";
	char b[8];
	mystrncpy(b,a,strlen(a));
	puts(b);
	return 0;
}
