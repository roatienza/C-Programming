#include <stdio.h>
#include <string.h>

int main()
{
	char* filename = "allcaps.txt";
	FILE* fp = fopen(filename, "r");
	char c[4];
	memset(c,0,sizeof(c));
	if(fp){
		while( fread(c,3,1,fp) ){
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
