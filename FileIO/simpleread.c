#include <stdio.h>

int main()
{
	char* filename = "fox.txt";
	FILE* fp = fopen(filename, "r");
	char c = 0;
	if(fp){
		while( (c=fgetc(fp)) != EOF ){
			printf("%c", c);
		}	
		fclose(fp);
	}else{
		printf("Opening %s failed\n", filename);
	}
	puts("");


	return 0;
}
