#include <stdio.h>

int main()
{
    double celsius = 0.0;
    double fahrenheit = 0.0;

    printf("Enter the temp in deg celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = celsius * 9/5 + 32;
    printf("%lf deg celsius = %lf deg fahrenheit\n", celsius, fahrenheit);

    return 0;
}
