#include <stdio.h>

int main()
 {
    int a;
    int b;

    b = 18;
    printf("inserisci età:");
    scanf("%d", &a);
    if (a>b)
    {
        printf("a è maggiorenne\n");
    }
    else if (a == b)
    {
        printf("a ha diciotto anni\n");
    }
    else
    {
        printf("a è minorenne\n");
    } 
 }