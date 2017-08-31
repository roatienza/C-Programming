#include <stdio.h>

int main()
{
	unsigned char a = 0;
	unsigned char b = 0;
	
	scanf("%c%c",&a,&b);
	printf("%x & %x = %x\n",a,b,a&b);
	printf("%x | %x = %x\n",a,b,a|b);

	return 0;
}
