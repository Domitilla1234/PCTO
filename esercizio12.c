#include <stdio.h>
int main ()
{

    int a;
    printf("in che anno sei nato");
    scanf ("%d",&a);
    if(a<1969)
    {
        printf("quanto sei nato prima\n");
    }
    else if(a==2006)
    {
        printf("sei nato lo stesso anno");
    }
    else
    {
        printf("quanto sei nato dopo\n");
    }
}

