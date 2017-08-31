#include <stdio.h>
#include <string.h>

int main()
{
	char* filename = "fox.bin";
	FILE* fp = fopen(filename, "rb");
	char c[4];
	memset(c,0,sizeof(c));
	if(fp){
		while( fread(c,1,3,fp) ){
			printf("%x%x%x\n", c[0],c[1],c[2]);
			memset(c,0,sizeof(c));
		}	
		fclose(fp);
	}else{
		printf("Opening %s failed\n", filename);
	}
	puts("");


	return 0;
}
