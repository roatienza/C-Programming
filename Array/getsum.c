#include <stdio.h>

int get_sum(int a[], int count)
{
    int i = 0;
    int total = 0;
    for(i=0; i<count; i++){
        total += a[i];
    }
    return total;
}

void f(int a[])
{
    printf("the sizeof(a) = %lu\n", sizeof(a));
}

int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6};
    int len = sizeof(a)/sizeof(a[0]);
    printf("The sum of elements of a is %d\n", get_sum(a, len));
    f(a);
    return 0;
}
