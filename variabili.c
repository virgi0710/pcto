#include <stdio.h>

int main()
 {
    //VARIABILI//

    int a; //numeri interi
    float b = 2.587654; //numeri con virgola
    double c = 2.68465230986453254658769; //numeri con virgola + precisi

    a = 2.7;
    printf("a+10 = %d\n", a - 10); //identificazione per int: %d
    printf("b+10: %f\n", b + 22);
    printf("c+918: %lf\n", c + 918);
    printf("a: %d\n", a);
    printf("somma: %f\n", a+b);
    float differenza = a-b;
    printf("differenza: %f\n", differenza);
    float divisione = a/b;
    printf("divisione: %f\n", divisione);
    //SOMMA? DIFFERENZA?//è possibile effettuare operazioni
 }
