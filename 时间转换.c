#include<stdio.h>
int main(void)
{
    int bjt;
    scanf_s("%d", &bjt);
    if (bjt < 0 || bjt>2359) {
        return 0;
    }
    if (bjt >= 800)
    {
        if (bjt == 800)
            printf("0");
        else if (bjt > 800 && bjt < 859) {
            printf("%d", bjt % 100);
        }
        else if(bjt % 100 > 10)
        {
            printf("%d%d", (bjt / 100) - 8, bjt % 100);
        }
        else
        {
            printf("%d0%d", (bjt / 100) - 8, bjt % 100);
        }
    }
    else
    {
        if (bjt % 100 > 10)
        {
            printf("%d%d", (bjt / 100) + 16, bjt % 100);
        }
        else
        {
            printf("%d0%d", (bjt / 100) + 16, bjt % 100);
        }
    }
    return 0;
}
