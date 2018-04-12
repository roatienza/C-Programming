#include <stdio.h>

int main()
{
    char a[5];
    a[0] = 'e';
    a[1] = 'e';
    a[2] = 'e';
    a[3] = '1';
    a[4] = '1';
    int i = 0;
    for(i=0; i<5; i++){
        printf("%c\n", a[i]);
    }

    return 0;
}
