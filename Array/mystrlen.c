#include <stdio.h>

int mystrlen(char s[])
{
	int i = 0;
	while( s[i++] );
	return --i;
}

int main()
{
	char a[] = "the quick brown fox";
	printf("strlen(a) = %d\n",mystrlen(a));
	return 0;
}
