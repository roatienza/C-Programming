#include <stdio.h>

int get_abs_sum(int a, int b, int c);

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d+%d+%d = %d\n", x, y, z, get_abs_sum(x, y, z));
    return 0;
}

int get_abs(int a)
{
    if(a < 0){
        return -a;
    }
    return a;
}

int get_abs_sum(int a, int b, int c)
{
    return get_abs(a) + get_abs(b) + get_abs(c);
}
