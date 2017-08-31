#include <stdio.h>
#include <math.h>

int main()
{
	int a = 'A';
	int b = 'a';
	while( a<='Z' && b<='z' ){
		printf("%c-%c\n",a,b);
		a++;
		b++;
	}
	return 0;
}
