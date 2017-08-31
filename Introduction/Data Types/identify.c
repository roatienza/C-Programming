#include <stdio.h>

int main()
{
	char c = 0;
	scanf("%c",&c);
	if(c>='0' && c<='9'){
		printf("%c is numeric\n",c);
	}else if(c>='A' && c<='Z'){
		printf("%c is uppercase\n",c);
	}else if(c>='a' && c<='z'){
		printf("%c is lowercase\n",c);
	}
	return 0;
}
