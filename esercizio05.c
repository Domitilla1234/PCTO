#include <stdio.h>
int main()
{
    int numero;
    int numero2;
    printf("inserisci un numero:\n");
    scanf("%d", &numero);
    printf("inserisci un secondo numero:\n");
    scanf("%d", &numero2);
    int somma=numero+numero2;
    printf("la somma e': %d\n",somma);
    return(0);
} 