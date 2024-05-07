#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);
    if(a>18 && a<30)
    {
        printf("a è giovane\n");
    }
    else if(a>60 && a<100)
    {
        printf("a è vecchio\n");
    }
}