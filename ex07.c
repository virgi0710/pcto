#include <stdio.h>

int main()
{
    int nascita;

    scanf("%d", &nascita);
    if(nascita == 1969)
    {
    printf("l'utente è nato l'anno in cui l'uomo è andato sulla luna");
    }
    else if(nascita<1969)
    {
        printf("l'utente è nato %d\n", 1969 - nascita);
        printf("anni prima dell'anno in cui l'uomo è andato sulla luna");
    }
    else if( nascita>1969)
    {
        printf("l'utente è nato %d", nascita - 1969);
        printf(" anni dopo dell'anno in cui l'uomo è andato sulla luna");
    }
     
}