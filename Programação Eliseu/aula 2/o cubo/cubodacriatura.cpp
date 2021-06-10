#include <stdio.h>
#include <stdlib.h>
int main (void)

{
    float a,c;
    printf("escolha o numero do qual voce quer calcular o cubo \n");
    scanf(" %f ",&a);
    c=a*a*a;
    printf("o cubo do numero %f , eh %f \n",a,c);
  system("pause");
  return 0;
}
