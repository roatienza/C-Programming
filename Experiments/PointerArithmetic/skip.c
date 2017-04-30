#include <stdio.h>
#include <string.h>

int main()
{
	char s[32] = "";
	int a = 0;
	int i = 0;
	int j = 0;
	fgets(s,sizeof(s),stdin);
	scanf("%d", &a);
	for(i=0; i<strlen(s);){
		putchar(s[i]);
		j = 0;
		while(j<a){
			j++;
			i++;
		}
		i++;
	}
	puts("");
	return 0;
}
