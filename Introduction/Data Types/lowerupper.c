#include <stdio.h>

int main()
{
	char input = 0;
	scanf("%c",&input);
	if(input=='y' || input=='Y'){
		printf("Yes\n");
	}else if(input=='n' || input=='N'){
		printf("No\n");
	}
	return 0;
}
