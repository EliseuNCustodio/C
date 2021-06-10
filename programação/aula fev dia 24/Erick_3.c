#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i, j, mat[1][2];
char ven[1][10], itens[2][10];

//mat - QUANTIDADE DE VENDAS
//ven - NOME DOS VENDEDORES
//itens - NOME DOS PRODUTOS

main()
{
      for(i=0;i<3;i++)
      {
          printf("Digite o nome de um produto:\n");                
          gets(itens[i]);
      }
      for(i=0;i<2;i++)
      {
            printf("Digite o nome do vendedor %i: \n",i+1);
            gets(ven[i]); // ???? NAO PEGA O SEGUNDO NOME [quando i==1] PULA A ETAPA
            for(j=0;j<3;j++)
            {
                            printf("Digite a quantidade de vendas de %s do produto %s \n", ven[i], itens[j]); // AQUI ESTA MOSTRANDO O ven[i] NORMALMENTE
                            scanf("%i",&mat[i][j]);
            }
            printf("Total de vendas de %s foi %i \n", ven[i], mat[i][0]+mat[i][1]+mat[i][2]);
      }
      for(i=0;i<3;i++)
      {
         if(mat[0][i]==mat[1][i])
             printf("%s e %s venderam a mesma quantidade de %s \n", ven[0], ven[1], itens[i]); // NAO PEGA NENHUM ven[x]
         else if(mat[0][i]>mat[1][i])
             printf("%s vendeu mais %s \n", ven[0], itens[i]); // ???? NAO ESTA MOSTRANDO O ven[0]
         else
             printf("%s vendeu mais %s \n", ven[1], itens[i]); // NAO ESTA MOSTRANDO O ven[1] pq nao pegou o ven[1]
      }
      system("pause");
}
