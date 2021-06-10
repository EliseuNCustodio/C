#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i;
char a[5];

main()
{
      printf("Digite uma palavra de 5 caracteres.\n");
      gets(a);
      for(i=0;i<5;i++)
      {
                      if(a[i]=='a')
                      a[i]='A';
      }
      printf("%s \n",a);
      system("pause");
}
