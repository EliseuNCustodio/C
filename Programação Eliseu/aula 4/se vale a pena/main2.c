#include <stdio.h>
#include <stdlib.h>
int v,ci,nb;
main()
{
  printf("digite o valor do espetaculo\n");
  scanf("%d",&v);
  printf("digite o preco do ingresso\n");
  scanf("%d",&ci);
  nb=v/ci;
  printf("eh melhor voce vender mais que %d , se nao vai foder po seu lado\n",nb);
  system("PAUSE");	
  return 0;
}
