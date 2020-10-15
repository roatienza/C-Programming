#include <stdio.h>
#include <math.h>

int main()
{
	int a = 'A', b = 'a';
	for(a='A',b='a'; a<='Z' && b<='z'; a++,b++ )
		printf("%c-%c\n",a,b);
	
	return 0;
}
