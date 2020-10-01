#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
   
    for(i=0; i<n; i++)
        printf("%d\n", a[i]);
    

    return 0;
}
