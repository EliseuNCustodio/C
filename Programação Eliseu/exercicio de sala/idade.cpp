#include <stdio.h>
#include <stdlib.h>

int i;

main(void)
{
printf("por favor insira sua idade\n");
scanf("%i",&i);
if (i<=18 || i>=67)
{
         printf("voce nao tem idade necessaria para doar sangue\n");
         }
         else
         {
             printf("por favor dirija-se a fila\n");
             }
system("PAUSE");
return 0;
}
