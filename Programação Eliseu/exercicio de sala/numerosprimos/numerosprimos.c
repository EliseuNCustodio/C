#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador, numero, qtd_divisores;
    printf("digite seu numero\n");
    scanf("%d",&numero);
    qtd_divisores = 0;

    for (contador =1;contador<=numero; contador++)
{
    if(numero%contador == 0)
        qtd_divisores++;
}
if (numero >=0){
if (qtd_divisores == 2)
    printf("numero %d ser primo\n", numero);
    else
        printf("seu numero nao ser primo  uga uga\n");
}
else
    printf("numero invalido\n");
    return 0;
}
