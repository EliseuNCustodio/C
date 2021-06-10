#include<stdio.h>
#include<stdlib.h>

int a, b;

main()
{
      printf("Insira um numero:\n");
      scanf("%i",&a);
      printf("O seu antecessor eh %i\n",calc(a));
      system("pause");
}

calc(int val)
{
         b=val-1;
         return b;
}
