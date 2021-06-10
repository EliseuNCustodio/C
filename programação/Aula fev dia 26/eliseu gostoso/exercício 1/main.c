#include <stdio.h>
#include <stdlib.h>
//#include <sys/time.h>
int main()
{
    //srand(time(NULL));
    int x,y,mat[3][3],mi,ma=0,soma=0;
    for (y=0;y<3;y++)
    {
        for (x=0;x<3;x++)
        {
            //mat[y][x]=rand()%99;
            printf ("digite o valor para posicao y=%i x=%i \n",y,x);
            scanf("%i",&mat[y][x]);
            soma=soma+mat[y][x];
        }
    }
    mi=mat[0][0];
    ma=mat[0][0];
    for (y=0;y<3;y++)
    {
        for (x=0;x<3;x++)
        {
            if (mat[y][x]<mi)
                mi=mat[y][x];
            if (mat[y][x]>ma)
                ma=mat[y][x];
        }
    }
    printf("\tmaior valor eh:%i\nmenor valor eh:%i\n\tsoma dos valores eh:%i\n\n",ma,mi,soma);
    for (y=0;y<3;y++)
    {
        for (x=0;x<3;x++)
        {
            printf("%i \t",mat[y][x]);
        }
    }
    return 0;
}
