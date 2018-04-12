#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i = atoi(argv[1]);
    char a[][6] = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
    };
    printf("%s\n", a[i]);
    return 0;
}
