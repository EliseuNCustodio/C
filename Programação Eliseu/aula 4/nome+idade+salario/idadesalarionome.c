#include <stdio.h>
#include <stdlib.h>

int idade ;
float salario ;
char nome[40] ;

main()
{
  printf("digite a idade depois o seu salario e depois seu nome\n");
  scanf("%d\n",&idade);
  scanf("%f\n",&salario);
  scanf("%s",nome);
  printf("pessoa %s , voce ganha %f com %d anos de idade\n",nome,salario,idade);
  system("PAUSE");	
  return 0;
}
