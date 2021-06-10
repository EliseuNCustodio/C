#include<stdio.h>
#include<stdlib.h>

int a[5], i, p;
char nomes[5][20];

main()
{
   printf("Digite 5 medias de notas separados por espaço:\n");
   scanf("%i %i %i %i %i",&a[0], &a[1], &a[2], &a[3], &a[4]);
   
   for(i=0; i<5; i++)
   {
         printf("Digite um nome qualquer:\n");
         scanf("%s",&nomes[i]);  
   }
   for(i=0;i<5;i++)
   {
       printf("O aluno %s esta com a nota %i.\n",nomes[i], a[i]);
   }
   system("pause");
}
