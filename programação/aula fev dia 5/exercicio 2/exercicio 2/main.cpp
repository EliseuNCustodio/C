#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int vet1[5],vet2[5],i;
    for (i=0;i<5;i++){
        printf("\n Informe a pisi��o %i do PRIMEIRO vetor: ",i);
        scanf("%i",&vet1[i]);}
    for (i=0;i<5;i++){
        printf("\n Informe a pisi��o %i do SEGUNDO vetor: ",i);
        scanf("%i",&vet2[i]);}
    for (i=0;i<5;i++)
    {
        if(vet1[i]==vet2[i]){
            printf("\nA posi��o %i possui o mesmo valor nos dois vetores.",i);
        }
    }
    return 0;
}
