#include <stdio.h>

int main()
{
	char c = 0;
	scanf("%c",&c);
	if(c>='a' && c<='z'){
		printf("The uppercase of %c is %c\n",c,'A' + c - 'a');
	}
	return 0;
}
