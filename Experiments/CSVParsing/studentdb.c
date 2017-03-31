#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct student_info{
	char first_name[32];
	char last_name[32];
	unsigned long long student_number;
};

struct student_info getinfo(char line[])
{
	struct student_info s;
	int i = 0;
	int comma = 0;
	int j = 0;
	memset( &s, 0, sizeof(s) );
	for(i=0; i<strlen(line); i++){
		if(line[i]==','){
			comma++;
			j = 0;
			continue;
		}
		switch(comma){
			case 0:
				s.last_name[j++] = line[i];
				break;
			case 1:
				s.first_name[j++] = line[i];
				break;
			case 2:
				if( isspace(line[i]) ){
					continue;
				}
				//printf("%s\n", &line[i]);
				s.student_number = strtoul(&line[i],0,10);
				return s;
		}	
	}
	return s;
}

int main()
{
	char line[128];
	struct student_info sinfo;
	fgets(line, sizeof(line), stdin);
	sinfo = getinfo(line);	
	printf("Last Name = %s, First Name = %s, Student No.=%llu\n",\
			sinfo.last_name, sinfo.first_name, sinfo.student_number);

	return 0;
}
