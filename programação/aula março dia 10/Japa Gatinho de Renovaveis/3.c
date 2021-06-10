#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//se quiseres manter a função depois do main(), é preciso declara-lá conforme a linha abaixo
void func1(void);

main()
{
      func1();
      //printf("Bem-vindo, %s \n", func1()); //erro: para usar a função no printf, é preciso ter uma variável como parâmetro
      
}

void func1(void)
{
      char nome[20];
      printf("Digite o seu nome: ");
      gets(nome);
      printf("Bem-vindo, %s!", nome); 
}


//eu fiz da seguinte maneira, ficando mais sensato o uso de funções
/*
#include <stdio.h>
#include <stdlib.h>

void boas_vindas(char *s) { //definição da função
  
  printf("Bem vindo, %s!",s);

}

int main(void) {
	
  char nome[10];
  
  printf("Digite seu nome: ");
  gets(nome);  
  
  boas_vindas(nome); //ativação da função

return 0;
}
*/
