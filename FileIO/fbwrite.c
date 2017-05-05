#include <stdio.h>
#include <string.h>

int main()
{
	char* filename = "fox.bin";
	char* txt = "The quick brown fox jumps over the lazy dog.";
	FILE* fp = fopen(filename, "wb");
	if(fp){
		fwrite(txt,1,strlen(txt)+1,fp);
		fclose(fp);
	}else{
		printf("Opening %s failed\n", filename);
	}
	return 0;
}
