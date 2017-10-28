#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if(n==1){
        printf("%d\n", n);
        return n;
    }
    return n*factorial(n-1);
}

int main(int argc, char** argv)
{
    int n = 0;
    if( argc!= 2){
        printf("Usage: %s <int>\n", argv[0]);
        return 1;
    }
    n = atoi(argv[1]);
    printf("The factorial of %d is %d.\n", n, factorial(n));
    return 0;
}
