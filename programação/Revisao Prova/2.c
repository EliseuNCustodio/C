#include<stdio.h>
#include<stdlib.h>

int a, b, c;

main()
{
      do
      {
          printf("Digite numero inteiro, ou 0.\n");
          scanf("%i",&a);
          if(a==0)
          {
                  printf("A media dos numero pares eh:> %i \n", c/b);
                  system("pause");
          }
          else if(a%2==0)
          {
                    b++;
                    c+=a;         
          }
      }
      while(a!=0);
}
