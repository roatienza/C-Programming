#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXCOL 10

void mytoupper(char a[][MAXCOL], int row)
{
    int i = 0;
    int j = 0;
    for(i=0; i<row; i++){
        for(j=0; (a[i][j]=toupper(a[i][j])); j++);
    }
}

int main(int argc, char* argv[])
{
    char a[5][MAXCOL];
    int i = 0;
    for(i=0; i<5; i++){
        fgets(a[i], MAXCOL, stdin);
        a[i][strlen(a[i])-1] = 0;
    }

    for(i=0; i<5; i++){
        puts(a[i]);
    }

    mytoupper(a, 5);

    for(i=0; i<5; i++){
        puts(a[i]);
    }
    //printf("mystrlen(%s) = %d\n", argv[1], mystrlen(argv[1]));
    //mytoupper(argv[1]);
    //printf("mytoupper() = %s\n", argv[1]);
    return 0;
}

