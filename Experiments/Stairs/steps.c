#include <stdio.h>

int main()
{
	int j = 0;
	int spaces = 0;
	int steps = 0;
	int step = 0;
	while(steps<5){
		j = spaces*4;
		while(j--){
			printf(" ");
		}
		if(step<2){
			printf("|");
			step++;
			if(!(step%2)){
				printf("____\n");
				spaces++;
				step = 0;
				steps++;
			}else{
				printf("\n");
			}
		}
	}
	return 0;
}
