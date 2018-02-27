#include <stdio.h>

int get_sum(int a, int b, int c);

int main()
{
    int x, y, z, sum;
    scanf("%d %d %d", &x, &y, &z);
    sum = get_sum(x, y, z);
    printf("%d+%d+%d = %d\n", x, y, z, sum);
    return 0;
}

int get_sum(int a, int b, int c)
{
    return a + b + c;
}
