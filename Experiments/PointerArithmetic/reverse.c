#include <stdio.h>
#include <string.h>

int main()
{
	char s[32] = "";
	int i = 0;
	fgets(s,sizeof(s),stdin);
	for(i=strlen(s)-1; i; i--){
		putchar(s[i]);
	}	
	printf("%c\n",s[0]);
	return 0;
}
