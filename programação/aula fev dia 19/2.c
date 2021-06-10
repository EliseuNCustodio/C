#include<stdio.h>
#include<stdlib.h>

int a[3][3], i, j, sum, k;

main()
{      
      for(i=0;i<3;i++)
      {
                      for(j=0;j<3;j++)
                      {
                                      printf("Digite um numero.\n");
                                      scanf("%i",&a[i][j]);
                      }
      }
      for(i=0;i<3;i++)
      {
                      for(j=0;j<3;j++)
                      {
                                      if(a[i][j]==1)
                                      {
                                                    sum=-1;
                                                    for(k=0;k<3;k++)
                                                    {
                                                                    sum+=a[k][j];                                                                    
                                                    }  
                                                    for(k=0;k<3;k++)
                                                    {
                                                                    sum+=a[i][k];                                                                    
                                                    }
                                                    printf("Foi encontrado o numero um na linha %i na coluna %i, a soma deu %i \n", i, j, sum);                                                  
                                      }
                      }
      }
      system("pause");
}
