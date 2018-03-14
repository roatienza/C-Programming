#include <stdio.h>

#define multiline(a,b)  (1){ \
    a++; \
    printf("%s\n",b); \
    if(a>2) break; \
    }

int main()
{
    int i = 0;
    while multiline(i,"Hello")

	return 0;
}
