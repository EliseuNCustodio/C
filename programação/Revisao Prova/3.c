#include<stdio.h>
#include<stdlib.h>

int a[10], b, c, i;

main()
{
      for(i=0; i<10; i++)
      {
                       printf("Digite numero positivo ou negativo:\n");
                       scanf("%i",&a[i]);
                       if(a[i]<0)
                                 b++;
                       else
                                 c+=a[i];        
      }
      printf("A quantidade de numero negativo eh %i e a soma dos positivos eh %i \n", b, c);
      system("pause");
}
