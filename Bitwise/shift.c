#include <stdio.h>

int main()
{
	unsigned char a = 15;
	unsigned char c = 0;
	int b = 0;
	
	//scanf("%c",&a);
	scanf("%d",&b);
	//c = a<<b;
	printf("%d<<%d = %d\n",a,b,a<<b);
	//c = a>>b;
	printf("%d>>%d = %d\n",a,b,a>>b);

	return 0;
}
