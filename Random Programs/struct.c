#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct record{
	char name[16];
	int age;
};

int main(int argc, char** argv)
{
	int i = 0;
	struct record *precord = 0;
	int len = (argc - 1)/2;
	precord = malloc( sizeof(struct record)*len );
	if( !precord ){
		puts("Memory allocation problem");
		return -1;
	}
	for(i=0; i<len; i++){
		strncpy(precord[i].name, argv[i*2+1], sizeof(precord[i].name));
		precord[i].age = atoi(argv[i*2+2]);
	}

	for(i=0; i<len; i++){
		printf("Name: %s and Age: %d\n", precord[i].name, precord[i].age);
	}

	free(precord);

	return 0;
}
