#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char *p = "the quick brown fox jumps";
    for(i=0; i<strlen(p); i++){
        fputc(p[i], stdout);
    //fwrite(&p, 1, strlen(p), stdout);
    //fprintf(stdout, "%d\n", i);
    }

    return 0;
}
