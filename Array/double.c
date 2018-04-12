#include <stdio.h>

void mydouble(int a[], int count)
{
    int i = 0;
    for(i=0; i<count; i++){
        a[i] *= 2;
    }
    count = 0;
}

int main()
{
    int a[] = { 1, 2, 3, 4, 5};
    int len = sizeof(a)/sizeof(a[0]);
    int i = 0;
    for(i=0; i<len; i++){
        printf("%d, ", a[i]);
    }
    printf("\n");
    mydouble(a, len);
    for(i=0; i<len; i++){
        printf("%d, ", a[i]);
    }
    printf("\n len = %d\n", len);
    return 0;
}
