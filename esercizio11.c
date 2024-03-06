#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("inserisci tre lunghezze");
    scanf("%d %d %d, &a,&b,&c);
    if (a==b&&==c)
    {
        printf(ïl triangolo e'equilatero\n");
    }
    else if (a==b && b!=c && c==a)
    {
        printf (ïl triangolo e'isoscele");
    }
    if (a!=b && b!=c && a!=c)
    {
        printf ("ïl triangolo e' scaleno");
    }
    if (a==0 && b==0 && c==0)
    {
        printf ("non e' un triangolo");
    }
    }