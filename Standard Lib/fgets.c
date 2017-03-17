#include <stdio.h>

int main()
{
	char a[8];
	fgets(a,sizeof(a),stdin);
	if( !a[sizeof(a)-1] ){
		printf("Greater than %lu. Thus, null terminated\n",sizeof(a));
	}
	puts(a);
	return 0;
}
