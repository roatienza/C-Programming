#include <stdio.h>

void myreset(int numbers[], int size)
{
	int i = 0;
	for(i=0; i<size; i++){
		numbers[i] = 0;
	}
}

int main()
{
	int n[] = { 1,2,3,4,5 };
	int i = 0;
	int size = sizeof(n)/sizeof(n[0]);
	for(i=0; i<size; i++){
		printf("%d ",n[i]);
	}
	printf("\n");
	myreset(n,size);
	for(i=0; i<size; i++){
		printf("%d ",n[i]);
	}
	printf("\n");
	return 0;
}
