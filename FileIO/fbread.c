#include <stdio.h>
#include <string.h>

int main()
{
	char* filename = "num.bin";
	FILE* fp = fopen(filename, "rb");
    int a = 0;
	if(fp){
		while( fread(&a,1,sizeof(a),fp) ){
            printf("0x%x\n", a);
		}	
		fclose(fp);
	}else{
		printf("Opening %s failed\n", filename);
	}
	puts("");


	return 0;
}
