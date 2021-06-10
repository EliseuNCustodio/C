#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int v1,v2,r;
    printf("digite o primeiro valor\n");
    scanf("%i",&v1);
    printf("digite o segundo valor\n");
    scanf("%i",&v2);
    r=v1+v2;
    printf("a soma de %i e %i eh %i",v1,v2,r);
    return 0;
}
