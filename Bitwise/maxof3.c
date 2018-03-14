#include <stdio.h>

#define max(a,b,c) a > b ? ((a>c)?a:c) : ((b>c)?b:c)

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d %d %d",&a, &b, &c);
    printf("The max(%d, %d, %d) = %d\n",a,b,c,max(a,b,c));

	return 0;
}
