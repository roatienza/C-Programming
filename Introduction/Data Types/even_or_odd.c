#include <stdio.h>

int main()
{
    int i = 0;
    while(1){
        scanf("%d", &i);
        if(i%2){
            return 0;
        }else{
            printf("Thank you for no. %d\n", i);
        }
    }
    return 0;
}
