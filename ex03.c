#include <stdio.h>

int main()

 {
    int a;
    int b;

    printf("inserisci due numeri:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    if(a>b)
  {
    printf("a è > di b\n");
  }
  else if (a == b)
   {
    printf("a è uguale a b");
   }
  else 
  {
    printf("a è < di b\n");
  }  

  }
  