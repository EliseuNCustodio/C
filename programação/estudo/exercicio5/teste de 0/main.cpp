#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int matriz0[100][2],x,y,soma=0;
    for (x=0;x<1;x++)
    {
        for (y=0;y<=100;y++)
        {
            soma=soma+y;
            printf("%i ",y);
            if(y%10==0)
            {
                printf("\n");
            }
        }
    }
    for (x=1;x==1;x++)
    {
        for (y=0;y>=-100;y--)
        {
            soma=soma+y;
            printf("%i ",y);
            if(y%10==0)
            {
                printf("\n");
            }
        }
    }
    printf("%i",soma);
    return 0;
}
