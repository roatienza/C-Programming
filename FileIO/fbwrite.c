#include <stdio.h>
#include <string.h>

int main()
{
	char* filename = "num.bin";
    int a = 0x12345678;
	FILE* fp = fopen(filename, "wb");
	if(fp){
		fwrite(&a,sizeof(a),1,fp);
		fclose(fp);
	}else{
		printf("Opening %s failed\n", filename);
	}
	return 0;
}
