#include <stdio.h>
#include <string.h>

struct student_info {
	char name [128];
	unsigned long int number;
};

void init(struct student_info* s, int len)
{
	memset(s,0,len*sizeof(struct student_info));
}

int main()
{
	struct student_info s[100];
	int i = 0;
	init(s, sizeof(s)/sizeof(s[0]));
	for(i=0; i<10; i++){
		printf("Name: %s , number: %lu\n", s[i].name, s[i].number);
	}
	

	return 0;
}
