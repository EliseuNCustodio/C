#include<stdio.h>
#include<stdlib.h>

int mat[2][3], i, i2, val;

main()
{
      for(i=0;i<2;i++)
      {
                      for(i2=0;i2<3;i2++)
                      {
                                         printf("Digite um valor para a linha %i e coluna %i \n",i,i2);
                                         scanf("%i",&mat[i][i2]);
                      }                      
      }
      do
      {
                      printf("Digite um valor para ser procurado na matriz, digite -99 para sair: \n");
                      scanf("%i",&val);
                      for(i=0;i<2;i++)
                      {
                                      for(i2=0;i2<3;i2++)
                                      {
                                                         if(val == mat[i][i2])
                                                                printf("O valor %i foi encontrado na linha %i na coluna %i \n", val, i, i2);
                                      }                      
                      }
      }
      while(val!=-99);
}
