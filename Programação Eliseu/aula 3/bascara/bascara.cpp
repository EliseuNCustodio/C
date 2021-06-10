#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
      float a,b,c,d,e,f;
      printf("digite o numero da variavel elevada ao quadrado\n");
      scanf("%f",&a);
      printf("digite o numero da variavel nao elevada ao quadrado\n");
      scanf("%f",&b);
      printf("digite a constante\n");
      scanf("%f",&c);
      d=(b*b)-(4*a*c);
      e=(-b+sqrt(d))/(2*a);
      f=(-b-sqrt(d))/(2*a);
      printf("as raizes sao %f e %f \n \n",e,f);
    system("PAUSE");
    return EXIT_SUCCESS;
}
