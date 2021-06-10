#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float n1,n2,r;
char o;
main()
{
  printf("digite o primeiro numero\n");
  scanf("%f",&n1);
  printf("digite o segundo numero\n");
  scanf("%f",&n2);
  fflush(stdin);
  printf("digite a operacao desejada, sendo as possibilidades +,-,/,*\n");
  scanf("%c",&o);
  switch (o)
  {
         case '+':
              r=n1+n2;
              break;
         case '-':
              r=n1-n2;
              break;
         case '/':
              r=n1/n2;
              break;
         case '*':
              r=n1*n2;
              break;
              default:
                      printf("digitou errado manolo\n");
                      break;
                      }
  printf("o valor do resultado da operação escolhida eh %f",r);
  system("PAUSE");	
  return 0;
}
