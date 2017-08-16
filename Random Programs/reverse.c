#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	int i =0;
	int end =  0;
	if( argc!=2 ){
		printf("Usage %s <string2reverse>\n", argv[0]);
		return -1;
	}
	end = strlen(argv[1])-1;
	for(i=end; i>=0; i--){
		printf("%c", argv[1][i]);	
	}
	puts("");

	return 0;
}
