#include <stdlib.h>
#include <stdio.h>

int main()
{
    float ma[3][2];
    int x,y,c=0,t;
    for (x=0;x<2;x++)
    {
        for (y=0;y<3;y++)
        {
            printf("digite o numero real\n");
            scanf ("%f",&ma[y][x]);
        }
    }
    for(x=0;x<2;x++)
    {
            for (y=0;y<3;y++)
                {
                    t=ma[y][x];
                    if (0!=ma[y][x]-t){
                    printf("%f\n",ma[y][x]);
                    c++;
                    }
                }
    }
    printf("%i",c);
    return 0;
}
