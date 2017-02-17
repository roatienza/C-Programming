#include <stdio.h>

char my2upper(char a);

int main()
{
	char c = 'A';
	do{
		scanf(" %c",&c);
		printf("Uppercase of %c is %c\n",c,my2upper(c));
	}while(1);
	return 0;
}

char my2upper(char a)
{
	if( a>='a' && a<='z' ){
		return a - ('a'-'A');
	}
	return a;
}
