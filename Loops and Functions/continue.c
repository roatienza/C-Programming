#include <stdio.h>

int main()
{
	int i = 0;
	for(;i<100;i++){
		if(i%2){
			continue;
		}
		printf("%d*%d=%d\n",i,i,i*i);
	}
	return 0;
}
