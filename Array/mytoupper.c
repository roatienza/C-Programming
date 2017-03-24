#include <stdio.h>
#include <ctype.h>

void mytoupper(char s[])
{
	int i = 0;
	while( s[i] ){
		s[i] = toupper(s[i]);
		i++;
	}
}

int main()
{
	char a[32];
	fgets(a,sizeof(a),stdin);
	if( !a[sizeof(a)-1] ){
		printf("Greater than %lu. Thus, null terminated\n",sizeof(a));
	}
	mytoupper(a);
	puts(a);
	return 0;
}
