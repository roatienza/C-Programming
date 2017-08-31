#include <stdio.h>

int main()
{
	char* filename = "numbers.txt";
	FILE* fp = fopen(filename, "r");
	int a = 0;
	if(fp){
		while( fscanf(fp,"%d",&a) != EOF ){
			printf("%d\n", a);
		}	
		fclose(fp);
	}else{
		printf("Opening %s failed\n", filename);
	}
	puts("");


	return 0;
}
