#include <stdio.h>
int a = 0;

void f(){
    a++;
}

void g(){
    a += 2;
}

void h(){
    int a = 0;
    a += 3;
}

int main()
{
    printf("a = %d\n", a);
    f();
    printf("a = %d\n", a);
    g();
    printf("a = %d\n", a);
    h();
    printf("a = %d\n", a);
    return 0;
}

