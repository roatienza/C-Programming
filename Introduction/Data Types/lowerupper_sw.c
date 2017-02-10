#include <stdio.h>

int main()
{
	char input = 0;
	scanf("%c",&input);
	switch(input){
		case 'y': case 'Y':
			printf("Yes\n");
			break;
		case 'n': case 'N':
			printf("No\n");
			break;
		default:
			break;
	}
	return 0;
}
