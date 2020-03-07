#include <stdio.h>

int main()
{
    int studens,i;
    scanf("%d", &studens);
    for (i=1;i<=studens; i+=2){
        if (i+1 ==studens|| i==studens){
            printf("%d", i);
        } else{
            printf("%d ", i);
        }
    }
    return 0;
}