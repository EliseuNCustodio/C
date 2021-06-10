//faça um programa que leia dois vetores com cinco numeros inteiros cada,
//calcule e mostre as posiçoes que apresentem o mesmo valor nos dois vetores

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)

{
    int vetor1[5],vetor2[5],i;
    printf("assim que funciona os vetores parte 2\n");
    printf("digite os 5 valores do primeiro vetor\n");
    for (i=0;i<5;i++){
        scanf("%d",&vetor1[i]);}
    printf("digite os 5 valores do segundo vetor\n");
    for (i=0;i<5;i++){
        scanf("%d",&vetor2[i]);}
    for (i=0;i<5;i++)
    {
        if(vetor1[i]==vetor2[i]){
                printf("os da posição %i sao iguais\n",i);
        }

    }
    return 0;
}
