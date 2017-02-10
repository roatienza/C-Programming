#include <stdio.h>

int main()
{
	int i = 1;
	int j = 0;
	while((i!=0) && i>0){
		j = i;
		i = i + 1;
	}
	printf("Max of int is %d\n",j);
	return 0;
}
