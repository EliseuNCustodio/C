#include <stdio.h>
#include <stdlib.h>
int calc (int v1,int v2);
int comp(int v1);
int main()
{
    int p,h,i;
    printf("digite seu peso\n");
    scanf("%i",&p);
    printf("digite sua altura em cm\n");
    scanf("%i",&h);
    i=calc(p,h);
    comp(i);
    return 0;
}

int calc (int v1,int v2)
{
    float imc;
    imc=(1/(v2/100*v2/100));
    printf("esse eh o imc %f\n",imc);
    return imc;
}
int comp(int v1)
{
    if (v1<18,5)
    {
    printf("voce esta abaixo do peso\n");
    }
    if(v1>=18,5 && v1<=25)
    {
    printf("voce esta com o peso normal\n");
    }
    if(v1>=25,1 && v1<=30)
    {
    printf("voce esta acima do peso\n");
    }
    if(v1>30)
    {
        printf("voce esta obeso\n");
    }
    return 0;
}
