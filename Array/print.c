#include <stdio.h>
#include <ctype.h>

int main()
{
    char a[] = { 'e', 'e', 'e', '1', '1' };
    int i = 0;
    for(i=0; i<5; i++){
        printf("%c\n", toupper(a[i]));
    }

    return 0;
}
