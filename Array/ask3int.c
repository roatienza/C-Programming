#include <stdio.h>

int main()
{
    int a[3];
    int i = 0;
    for(i=0; i<3; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<3; i++){
        printf("%d\n", a[i]);
    }

    return 0;
}
