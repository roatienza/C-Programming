#include <stdio.h>
#include <ctype.h>

int mystrlen(char a[])
{
    int i = 0;
    for(i=0; a[i]; i++);
    return i;
}

void mytoupper(char a[])
{
    int i = 0;
    for(i=0; (a[i]=toupper(a[i])); i++);
}

int main(int argc, char* argv[])
{
    printf("mystrlen(%s) = %d\n", argv[1], mystrlen(argv[1]));
    mytoupper(argv[1]);
    printf("mytoupper() = %s\n", argv[1]);
    return 0;
}

