#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a+b>c && a+c>b && b+c>a)
    {
        printf("ABC è un triangolo\n");
    }
    if(a == b || b == c || a == c)
    {
        printf("ABC è un triangolo isoscele\n");
    }
    
    else if (a!=b && b!=c && a!=c) 
    {
        printf("ABC è un triangolo scaleno\n");
    }
    
    else if(a == b && b == c && a == c)
    {
        printf("ABC è un triangolo equilatero\n");
    }
    else 
    {
        printf("ABC non è un triangolo\n");
    }

}

