#include <stdio.h>

int main()
{
	char* filename = "numbers.txt";
	FILE* fp = fopen(filename, "w");
	int a = 1;
	if(fp){
		while( a<=10 ){
			fprintf(fp,"%d",a);
			a++;
		}	
		fclose(fp);
	}else{
		printf("Opening %s failed\n", filename);
	}
	puts("");


	return 0;
}
