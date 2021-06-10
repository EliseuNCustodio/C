#include <stdio.h>
#include <stdlib.h>

int v1,v2,v3,v4,soma;

main()

{
  printf("digite a variavel 1\n");
  scanf("%d", &v1);
  printf("digite a variavel 2\n");
  scanf("%d", &v2);
  printf("digite a variavel 3\n");
  scanf("%d", &v3);
  printf("digite a variavel 4\n");
  scanf("%d", &v4);
  soma=v1+v2+v3+v4;
  printf("o resultado da soma eh %d\n",soma);
  system("PAUSE");	
  return 0;
}
