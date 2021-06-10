#include<stdio.h>
#include<stdlib.h>

float a[3][2];
int i, j, k;

main()
{
      for(i=0;i<3;i++)
      {
                      for(j=0; j<2;j++)
                      {
                           printf("Digite numeros reais.\n");
                           scanf("%f",&a[i][j]);
                           if(a[i][j]-(int)a[i][j]==0)
                           {
                                                      k++;                                                   
                           }
                      }
      }
      printf("Foi digitado %i numeros inteiros.\n", k);
      system("pause");
}
