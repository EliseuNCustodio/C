#include<stdio.h>
#include<stdlib.h>

int a, b, c, i;
      b=1;
main()
{

      printf("Insira uma numero:\n");
      scanf("%i",&a);
      c=a;
      for(i=0;i<a;i++)
      {
          printf("%i \n",i+1);
          b=b*a;
          c--;
      }
      printf("O produto eh: %i \n",b);
      system("pause");
}
