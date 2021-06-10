#include <stdio.h>
#include <stdlib.h>
int gasto ();
int deposit ();
float m=0;
int main()
{
    int c=99;
    printf("esta eh minha conta, para ver quanto dinheiros tenho gasto e com o que\n");
    while (c!=0)
    {
        printf("seu valor na conta eh de R$ %.2f\n",m);
        printf("digite o comando que quer colocar,\n\tPara deposito digite (1)\n\tPara gasto digite (2)\n\tPara finalizar o programa digite (0)\n");
        scanf("%i",&c);
        switch (c)
        {
            case 1:
            {
                deposit();
            }
            case 2:
            {
                gasto();
            }
            case 0:
            break;
        }
    }
return 0;
}

int gasto()
{
    float g;
    printf("digite o valor gasto\n");
    scanf("%f",&g);
    m=m-g;
    return 0;
}

int deposit()

{
    float d;
    printf("digite o valor do deposito\n");
    scanf("%f",&d);
    m=m+d;
    return 0;
}

