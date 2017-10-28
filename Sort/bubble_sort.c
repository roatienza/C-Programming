#include <stdio.h>
#include <stdlib.h>


void bubble_sort(int a[], int size)
{
    int i;
    int j;
    int temp;
    for(j=0; j<size-1; j++){
        for(i=0; i<size-1; i++){
            if(a[i+1]<a[i]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    int a[10];
    int i;
    if(argc<=1){
        printf("Usage: %s <int1> <int2> ...\n", argv[0]);
        return -1;
    }

    for(i=0; i<(argc-1); i++){
        a[i] = atoi(argv[i+1]);
    }

    for(i=0; i<(argc-1); i++){
        printf("%d\n", a[i]);
    }

    bubble_sort(a, argc-1);

    for(i=0; i<(argc-1); i++){
        printf("%d\n", a[i]);
    }

    return 0;
}
