#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[2][3],y,x,n;
      for (y=0;y<2;y++)
    {
        for (x=0;x<3;x++)
        {
            printf ("digite o valor para posicao y=%i x=%i \n",y,x);
            scanf("%i",&mat[y][x]);
        }
    }

    do
    {
        printf ("digite o valor que deseja buscar\n");
        scanf("%i",&n);
        for (y=0;y<2;y++)
        {
            for (x=0;x<3;x++)
            {
                if (n == mat[y][x])
                printf("o valor %i foi encontrado na linha %i e coluna %i\n",n,y,x);
            }
        }
    }
    while(n!=-99);
    return 0;
}
