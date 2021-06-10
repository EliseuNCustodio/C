#include<stdio.h>
#include<stdlib.h>

int mat[3][3], i, i2, max, min, sum=0;

main()
{
      for(i=0;i<3;i++)
      {
                      for(i2=0;i2<3;i2++)
                      {
                                         printf("Digite o valor da linha %i e coluna %i \n", i, i2);
                                         scanf("%i", &mat[i][i2]);
                                         if(i==0 && i2==0)
                                                        max=min=mat[i][i2];
                                         if(mat[i][i2]>max)
                                                           max=mat[i][i2];
                                         if(mat[i][i2]<min)
                                                           min=mat[i][i2];
                                         sum+=mat[i][i2];                       
                      }
      }
      printf("O maior valor inserido foi %i enquanto o menor valor foi %i e a soma de todos os valores deu %i \n",max, min, sum);
      system("pause");      
}
