#include <stdio.h>

int main()
{
	int period = 0;
	int i = 0;
	int j = 0;
	int l = 0;
	int max = 80;
	int level = 0;
	printf("Enter period: ");
	scanf("%d",&period);
	level = 1 + period/2;
	for(l=0; l<level; l++){
		for(i=0, j=0; i<max; i++,j++){
			if( (j==(level-1)-l) || (j==(level-1)+l) ){
				printf("*");
			}else{
				printf(" ");
			}
			if(j==period){
				j=0;
			}
			if((i+1)==max){
				printf("\n");
			}
		}
	}

	return 0;
}
