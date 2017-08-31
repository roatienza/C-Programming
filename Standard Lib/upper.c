#include <stdio.h>
#include <ctype.h>

int main()
{
	char a = 0;
	char b = 0;
	char c = 0;
	scanf("%c%c%c",&a,&b,&c);
	printf("upper(%c%c%c)=%c%c%c\n",a,b,c,toupper(a),toupper(b),toupper(c));
	return 0;
}

