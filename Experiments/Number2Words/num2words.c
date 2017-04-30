#include <stdio.h>

int main()
{
	char *set10[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	char *set20[10] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
	char *set30[10] = { "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
	int i = 0;
	int ones = 0;
	int tens = 0;
	scanf("%d", &i);
	if(i<10){
		printf("%s\n", set10[i]);
	}else if(i<20){
		i -= 10;
		printf("%s\n", set20[i]);
	}else{
		ones = i%10;
		tens = i/10;
		if(i==100){
			printf("one hundred\n");
		}else{
			tens -= 3;
			printf("%s ", set30[tens]);
			if(ones){
				printf("%s\n", set10[ones]);
			}else{
				puts("");
			}
		}
	}

	return 0;
}
