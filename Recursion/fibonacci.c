#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if( n <= 1 ) { 
        printf("%d\n", n);
        return n;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}

int main(int argc, char** argv)
{
    int n = 0;
    if( argc!= 2){
        printf("Usage: %s <int>\n", argv[0]);
        return 1;
    }
    n = atoi(argv[1]);
    printf("The %d-th fibonacci is %d.\n", n, fibonacci(n));
    return 0;
}
