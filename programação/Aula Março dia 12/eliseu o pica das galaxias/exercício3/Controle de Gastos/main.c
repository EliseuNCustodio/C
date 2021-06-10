#include <stdio.h>
#include <stdlib.h>
int deposito(),gasto(),secoes(),adicionarsecoes(),deletarsecoes(),menu();
float T=0;
char s;
int main()
{
    int y=99;
    printf("Bem vindo a calculadora de gastos e saldo do eliseu\n");
    while (y!=0)
        {
        y=menu();
        }
    return 0;
}
int menu()
{
    int op=99;
    printf("Bem vindo ao menu\n\nDigite 1 para adicionar quantia ao seu total;\nDigite 2 para adicinar um gasto ao seu total(implementando);\nDigite 3 para checar seu saldo atual;\nDigite 4 para checar seus gasto por seções pre-adicionadas(implementando);\nDigite 5 para adicionar seções de gastos(implementando);\nDigite 6 para deletar seções que foram adicionadas(implementando);\nDigite 0 para fechar o programa e salvar seus dados(implementando);\n");
    scanf("%i",&op);
    switch (op)
    {
        case 1:
        {
            deposito();
        }
        case 2:
        {
            gasto();
        }
        case 3:
        {
            printf("Seu saldo atual é de %.2f\n",T);
        }
        case 4:
        {
            secoes();
        }
        case 5:
        {
            adicionarsecoes();
        }
        case 6:
        {
            deletarsecoes();
        }
    }
    printf("\n");
return op;
}
int deposito()
{
    float d;
    printf("digite o valor que deseja adicionar ao seu valor total\n");
    scanf("%f",&d);
    T=T+d;
    return 0;
}
int gasto()
{
    float g;
     printf("qual o tipo de gasto?\n");
     printf("qual o valor do gasto\n");
     scanf("%f",&g);
     T=T-g;
}
int secoes()
{

}
int adicionarsecoes()
{

}
int deletarsecoes()
{

}
