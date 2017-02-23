#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int s = 0;
	scanf("%i",&s);
	for(i=0; i<s; i++){
		printf("*");
	}
	printf("\n");
	for(i=0; i<(s-2); i++){
		printf("*");
		for(j=0; j<(s-2); j++){
			printf(" ");
		}
		printf("*\n");

	}
	for(i=0; i<s; i++){
		printf("*");
	}
	printf("\n");
	return 0;
}
