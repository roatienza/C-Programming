#include <stdio.h>
#include <math.h>

int main()
{
	char a = 'A';
	do{
		printf("(Y)es, (N)o or (Q)uit\n");
		printf("Enter choice: ");
		scanf("%c",&a);
	}while(a!='q' && a!='Q');
	return 0;
}
