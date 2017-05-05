#include <stdio.h>
#include <string.h>

int main()
{
	char* filename = "fox.txt";
	FILE* fp = fopen(filename, "r");
	char c[4];
	memset(c,0,sizeof(c));
	if(fp){
		while( fread(c,1,3,fp) ){
			printf("%s\n", c);
			memset(c,0,sizeof(c));
		}	
		fclose(fp);
	}else{
		printf("Opening %s failed\n", filename);
	}
	puts("");


	return 0;
}
