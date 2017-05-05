#include <stdio.h>

int main()
{
	char* filename = "allcaps.txt";
	FILE* fp = fopen(filename, "w");
	char c = 'A';
	if(fp){
		while( c<='Z' ){
			fputc(c,fp);
			c++;
		}	
		fputc('\n',fp);
		fclose(fp);
	}else{
		printf("Opening %s failed\n", filename);
	}
	return 0;
}
