#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,x,ma[2][2],sl=0,st=0;
    for (y=0;y<2;y++)
    {
        for(x=0;x<2;x++)
        {
            scanf("%i",&ma[y][x]);
        }
    }
    for (y=0;y<2;y++)
    {
        for(x=0;x<2;x++)
        {
            st=st+ma[y][x];
            if(y==1)
            {
                sl=sl+ma[y][x];
            }
        }
    }
    printf("valor 1 %i\n valor 2 %i",st,sl);
}
