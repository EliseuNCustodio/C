#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m=0;
    int s,r=0,n=0;
    do{
    n=n+1;
    printf("digite o número que quer fazer a soma, digite -99 para terminar\n");
    scanf("%i",&s);
    r=r+s;
    }while(s!=-99);
    r=r+99;
    m=r/(n-1);
    printf("resultado final %i e a media eh %f \n",r,m);
    return 0;
}
