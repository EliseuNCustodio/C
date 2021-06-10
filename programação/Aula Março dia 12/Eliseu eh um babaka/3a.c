#include<stdio.h>
#include<stdlib.h>

char *ident(int b)
{
     if(b<0)
            return "Negativo";
     if(b>0)
            return "Positivo";
     else
            return "Zero";
}

main()
{
      int a;
      printf("Digite um numero positivo ou negativo.\n");
      scanf("%i",&a);
      printf("O valor digitado eh %s\n", ident(a));
      system("pause");
}
