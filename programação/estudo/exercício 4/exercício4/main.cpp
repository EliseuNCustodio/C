#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//10 numeros qual os numeros negativos e soma dos positivos
int main()
{
    int vet[10],i,soma=0;
    for(i=0;i<10;i++)
    {
       printf("digite o numero que ficara na posicao %i\n",i);
       scanf("%i",&vet[i]);
    }
    for (i=0;i<=10;i++)
    {
        if(vet[i]<0){
            printf("%i ",vet[i]);
        }
    }
    for (i=0;i<10;i++)
    {
        if(vet[i]>0){
        soma = soma+vet[i];}
    }
    printf("sao negativos\n a soma dos valores positvos e %i",soma);
    return 0;
}
