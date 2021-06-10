#include<stdio.h>
#include<stdlib.h>

//int func1(char *w, char *l);


main()
{
      char word[20],le;
      printf("Digite uma palavra:\n");
      gets(word);
      printf("Digite uma letra\n");
      scanf("%c",le);
      printf("A palavra %s possui %i letras %c.\n", word, func1(word,le), le);
      system("pause");
}

int func1(char *w, char *l) // Problema aqui de novo com a entrada de chars
{
           int i, cont = 0;
           for(i=0;i<strlen(w);i++)
           {
                                      if(w[i]==l)
                                                 cont++;                                      
           }
           return cont;
}
