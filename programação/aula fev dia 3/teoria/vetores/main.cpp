//� uma variavel composta, homog�nea e unidimensional
//conjunto de variaveis de mesmo tipo que possuem mesmo indentificador(nome) e que s�o alocadas sequencialmente na mem�ria
//colocado dentro de int (exemplo : int nome[3]
//                        variavel nome==[5][-3][6]
//                                        0   1  2
//para usar:
//    pos=nome[1];
//    (pos=-3)
//particularidades: indices (numeros inteiros) usados para indentificar as posi��es come�am sempre em 0 e v�o at� o tamanho do vetor -1
//ou seja variavel int m[3] tera (3-1) vetores
//
//possibilidades, pode alocar 3 valores em uma unica variavel
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    int vetor[3],i;
    printf("assim que funciona os vetores");
    for (i=0;i<3;i++){
        scanf("%d",&vetor[i]);
}
    for (i=0;i<3;i++){
            if(vetor[i]<0) {
        printf("%d\n",vetor[i]);
    }
    }
}

