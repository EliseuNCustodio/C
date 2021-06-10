#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char a[20];
int i;

main()
{
      printf("Digite um nome:\n");
      gets(a);
      for(i=0;i<strlen(a);i++)
      {
         puts(a);
         printf("%i \n",i+1);
      }
      system("pause");
}
