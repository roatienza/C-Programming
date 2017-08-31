#include <stdio.h>

double perimeter(double side1, double side2)
{
	return 2*(side1+side2);
}

double area(double side1, double side2)
{
	return side1*side2;
}

int main()
{
	double a = 0;
	double b = 0;
	printf("Enter sides: ");
	scanf("%lf%lf",&a,&b);
	printf("The perimeter is %lf\n",perimeter(a,b));
	printf("The area is %lf\n",area(a,b));
	return 0;
}

