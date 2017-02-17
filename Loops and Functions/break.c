#include <stdio.h>

int main()
{
	char a = 'A';
	while(1){
		printf("(Y)es, (N)o or (Q)uit\n");
		printf("Enter choice: ");
		scanf("%c",&a);
		if(a=='q' || a=='Q'){
			break;
		}
	}
	return 0;
}
