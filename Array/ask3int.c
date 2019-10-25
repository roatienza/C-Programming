#include <stdio.h>

int main()
{
    int array[3];
    int i = 0;
    for(i=0; i<3; i++){
        scanf("%d", &array[i]);
    }
    for(i=0; i<3; i++){
        printf("%d\n", array[i]);
    }

    return 0;
}
