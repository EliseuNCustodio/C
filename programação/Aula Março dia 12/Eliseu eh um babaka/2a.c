#include<stdio.h>
#include<stdlib.h>

void IMC(void)
{
      float imc;
      printf("Bem-vindo ao classificador de IMC, digite o valor de seu IMC:\n");
      scanf("%f",&imc);
      printf("Voce esta ");
      if(imc<18.5)
                  printf("Abaixo do Peso.\n");     
      else if(imc<=25)
                  printf("em seu Peso Normal.\n");
      else if(imc>30)
                  printf("Obeso.\n");
      else
                  printf("Acima do Peso.\n");       
}

main()
{
      IMC();
      system("pause");
}
