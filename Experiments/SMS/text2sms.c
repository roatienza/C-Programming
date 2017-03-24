#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
	char a[64];
	int len = 0;
	int i = 0;
	int begin = 0;
	fgets(a,sizeof(a),stdin);
	len = strlen(a);
	for(i=0; i<len; i++){
		begin = 0;
		if(i==0){
			begin = 1;
		}else if( isspace(a[i-1]) ){
			begin = 1;
		}
		switch(a[i]){
		case 'a': case 'e': case 'i': case 'o': case 'u':
			if(begin){
				putchar(a[i]);
			}
			break;
		default:
			putchar(a[i]);
			break;
		}
	}

	return 0;
}
