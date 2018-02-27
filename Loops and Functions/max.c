#include <stdio.h>

int get_max(int a, int b, int c)
{
    int m = 0;
    if(a > b){
        m = a;
        if(c > m){
            m = c;
        }
    }else{
        m = b;
        if(c > m){
            m = c;
        }
    }
    return m;
}

int main()
{
    int x, y, z, m;
    scanf("%d %d %d", &x, &y, &z);
    m = get_max(x, y, z);
    printf("max(%d, %d, %d) = %d\n", x, y, z, m);
    return 0;
}

