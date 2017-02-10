#include <stdio.h>

int main()
{
	int noise = 0;
	while(1){
		scanf("%d",&noise);
		if(noise<=50){
			printf("quiet\n");
		}else if(noise<=70){
			printf("intrusive\n");
		}else if(noise<=90){
			printf("annoying\n");
		}else if(noise<=100){
			printf("very annoying\n");
		}else {
			printf("uncomfortable\n");
		}
	}
	return 0;
}
