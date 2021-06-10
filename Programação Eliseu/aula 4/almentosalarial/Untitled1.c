#include <stdio.h>
#include <stdlib.h>
int salario,salarioalmentado;
main(void)
{
          printf("digite seu salario para saber o valor de quanto tera\n");
          scanf("%s",&salario);
          salarioalmentado=salario+salario*0.25;
          printf("seu salario eh agora de %s",salarioalmentado);
          system("PAUSE");
          return 0;
          }
