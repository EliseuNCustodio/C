#include <stdio.h>
#include <stdlib.h>
float s,s2;
main(void)
{
          printf("digite seu salario para saber o valor de quanto tera\n");
          scanf("%f",&s);
          s2=s+(s*0.25);
          printf("seu salario eh agora de %f",s2);
          system("PAUSE");
          return 0;
          }
