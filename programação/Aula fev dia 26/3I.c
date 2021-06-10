#include<stdio.h>
#include<stdlib.h>

int mat[3][2], vet[6], i, i2, n=1, sum=0;

main()
{
      printf("Digite um numero para que todos os numeros da matrix seja multiplicado por ele.\n");
      scanf("%i",&n);
      for(i=0;i<3;i++)
      {
                      for(i2=0;i2<2;i2++)
                      {
                                         printf("Digite um valor para a linha %i para a coluna %i \n",i,i2);
                                         scanf("%i",&mat[i][i2]);
                                         vet[sum]=mat[i][i2]*n;
                                         sum++;
                      }
      }
      printf("A matriz digitada foi multiplicada por %i e o resultado foi: \n", n);
      for(i=0;i<6;i++)
                      printf("%i\t",vet[i]);
      system("pause");
}
