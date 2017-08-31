#include <stdio.h>
#include <ctype.h>
#include <string.h>

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
	char a[5][64];
	int i = 0;
	int size = sizeof(a)/sizeof(a[0]);
	for(i=0; i<size; i++){
		fgets(a[i],sizeof(a[i]),stdin);
		a[i][strlen(a[i])-1] = 0;
		mytoupper(a[i]);
	}
	for(i=0; i<size; i++){
		puts(a[i]);
	}

	return 0;
}
