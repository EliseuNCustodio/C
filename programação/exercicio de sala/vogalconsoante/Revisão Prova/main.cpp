#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int m,dm,cm,mm;
    printf("digite a quantidade em metros que quer transformar \n");
    scanf("%i", &m);
    dm=m*10;
    cm=m*100;
    mm=m*1000;
    printf("o valor de %i em decimetros eh %i\nem centimetros eh %i\nem milimitros eh %i",m,dm,cm,mm);
    return 0;
}
