#include <stdio.h>
#include <stdlib.h>


void selection_sort(int a[], int size)
{
    int i;
    int j;
    int imin;
    int min;
    int temp;
    for(j=0; j<size; j++){
        min = a[j];
        for(i=j+1; i<size; i++){
            if(a[i]<min){
                min = a[i];
                imin = i;
            }
        }
        if( min != a[j] ){
            temp = a[j];
            a[j] = min;
            a[imin] = temp;
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

    selection_sort(a, argc-1);

    for(i=0; i<(argc-1); i++){
        printf("%d\n", a[i]);
    }

    return 0;
}
