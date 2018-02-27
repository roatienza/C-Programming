#include <stdio.h>

int get_char_count()
{
    int i = 0;
    char c = 0;
    do{
        scanf("%c", &c);
        if(c == '\n'){
            break;
        }
        i++;
    }while(1);
    return i;
}

int main()
{
    printf("The number of chars is %d\n", get_char_count());
    return 0;
}

