#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ma[3][3],x,y,s=0;
    for (x=0;x<3;x++)
    {
        for (y=0;y<3;y++)
        {
            printf("digite o numero da coluna %i e da linha %i\n",y,x);
            scanf("%i",&ma[y][x]);
        }
    }
    for (x=0;x<3;x++)
    {
        for (y=0;y<3;y++)
        {
            if (ma[0][x]<3 && ma[0][x]>0)
            {
                for(x=0;x<3;x++)
                {
                 s=s+ma[0][x];
                }
            }
            printf("a soma da coluna %i eh %i\n",y,s);
        }
    }
        for (x=0;x<3;x++)
    {
        for (y=0;y<3;y++)
        {
            if (ma[y][0]<3 && ma[y][0]>0)
            {
                for(y=0;y<3;y++)
                {
                 s=s+ma[y][0];
                }
            }
            printf("a soma da linha %i eh %i\n",x,s);
        }
    }
    return 0;
}
