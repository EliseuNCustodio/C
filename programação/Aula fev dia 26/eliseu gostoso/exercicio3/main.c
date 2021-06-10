#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][2],n,x,y,i=0,vet[6];
     for (y=0;y<3;y++)
    {
        for (x=0;x<2;x++)
        {
            printf ("digite o valor para posicao y=%i x=%i \n",y,x);
            scanf("%i",&mat[y][x]);
        }
    }
    printf("digite um valor para multiplicar a matriz\n");
    scanf("%i",&n);
     for (y=0;y<3;y++)
    {
        for (x=0;x<2;x++)
        {
            vet[i]=mat[y][x]*n;
            i++;
        }
    }
     for (i=0;i<6;i++)
    {
        printf("%i\t",vet[i]);
    }
    return 0;
}
