#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int mat[2][3],y,x,t1=0,t2=0;
    char n1[10],n2[10];
    printf("qual o nome do vendedor 1\n");
    gets(n1);
    printf("qual o nome do vendedor 2\n");
    gets(n2);
    for (y=0;y<1;y++)
    {
        if(y==0)
        {
            printf("\tvendedor %s\n",n1);
        }
        for (x=0;x<3;x++)
        {
            if(x==0)
            {
                printf("digite o numero de notebooks vendidos\n");
                scanf("%i",&mat[y][x]);
            }
            if(x==1)
            {
                printf("digite o numero de celulares vendidos\n");
                scanf("%i",&mat[y][x]);
            }
            if(x==2)
            {
                printf("digite o numero de tablets vendidos\n");
                scanf("%i",&mat[y][x]);
            }
        }
        if(y==1)
        {
            printf("%i\n",y);
            printf("\tvendedor %s\n",n2);
        }
        for (y=1;y<2;y++)
    {
        if(y==0)
        {
            printf("%i\n",y);
            printf("\tvendedor %s\n",n1);
        }
        for (x=0;x<3;x++)
        {
            if(x==0)
            {
                printf("digite o numero de notebooks vendidos\n");
                scanf("%i",&mat[y][x]);
            }
            if(x==1)
            {
                printf("digite o numero de celulares vendidos\n");
                scanf("%i",&mat[y][x]);
            }
            if(x==2)
            {
                printf("digite o numero de tablets vendidos\n");
                scanf("%i",&mat[y][x]);
            }
        }
    }
    }
    for (y=0;y<1;y++)
    {
        for(x=0;x<3;x++)
        {
            t1=t1+mat[y][x];
        }
    }
    for (y=1;y<2;y++)
    {
        for(x=0;x<3;x++)
        {
            t2=t2+mat[y][x];
        }
    }
    //comparação
    printf("\n");
    for(x=0;x<3;x++)
    {
        if(x==0)
        {
            printf("Notebooks: ");
        }
        if(x==1)
        {
            printf("Celulares: ");
        }
        if(x==2)
        {
            printf("Tablets: ");
        }
        if(mat[0][x]<mat[1][x])
        {
            printf("%s vendeu mais\n",n2);
        }
        if(mat[0][x]>mat[1][x])
        {
            printf("%s vendeu mais\n",n1);
        }
        if(mat[0][x]==mat[1][x])
        {
            printf("mesma quantidade\n");
        }
    }
    printf("\nTotal de vendas:");
    printf("\t%s = %i\t%s = %i\n",n1,t1,n2,t2);
    return 0;
}
