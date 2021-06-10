#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// Matricula de 7 alunos com suas medias, mostrar o com maior media e mostrar que nota deve ser tirada na final para passar
int main()
{
    int vet1[7],i,maior=0;
    float vet2[7],nota=0,media=0;
    for(i=0;i<7;i++){
        printf("digite a matricula do aluno %i\n",i+1);
    scanf("%i",&vet1[i]);
    printf("digite a media desse aluno\n");
    scanf("%f",&vet2[i]);
    if(nota<vet2[i]){
        maior=vet1[i];
        nota=vet2[i];
    }
    }
    for(i=0;i<7;i++)
    {
        if(vet2[i]<7)
        {
            media=10-vet2[i];
            printf("aluno de matricula %i deve tirar no minimo nota %f para ficar na media\n",vet1[i],media);
        }
    }
    printf("aluno de matricula %itirou a maior nota",maior);
    return 0;
}
