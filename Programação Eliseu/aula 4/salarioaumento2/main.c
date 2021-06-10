#include <stdio.h>
#include <stdlib.h>
float s,a,sf;
main()
{
  printf("digite o seu salario\n");
  scanf("%f",&s);
  printf("digite a porcentagem do almento\n");
  scanf("%f",&a);
  sf=s+(s*(a/100));
  printf("seu salario agora eh de %f\n",sf);
  system("PAUSE");	
  return 0;
}
