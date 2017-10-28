#include <stdio.h>
#include <stdlib.h>


int tabs = 0;

void btrack(int n){
    if (n == 0) {
        for (int ctr = 0; ctr < tabs; ctr++)
            printf("\t");
        printf("0\n");
    } else {
        for (int ctr = 0; ctr < tabs; ctr++)
            printf("\t");
        printf("%d\n", n);
        tabs++;
        btrack(n - 1);
        tabs--;
        for (int ctr = 0; ctr < tabs; ctr++)
            printf("\t");
        printf("%d\n", n);
    }
}

int main(int argc, char** argv)
{
    int n = 0;
    if( argc!= 2){
        printf("Usage: %s <int>\n", argv[0]);
        return 1;
    }
    n = atoi(argv[1]);
    btrack(n);
    return 0;
}
