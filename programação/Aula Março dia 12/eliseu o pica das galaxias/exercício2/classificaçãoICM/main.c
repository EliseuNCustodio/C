#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ICM;
    printf("qual seu ICM?\n");
    scanf("%i",&ICM);
    comp(ICM);
    return 0;
    }
int comp(int v1)
{
    if (v1<18)
    {
    printf("voce esta abaixo do peso\n");
    }
    if(v1>=18 && v1<25)
    {
    printf("voce esta com o peso normal\n");
    }
    if(v1>=25 && v1<=30)
    {
    printf("voce esta acima do peso\n");
    }
    if(v1>30)
    {
        printf("voce esta obeso\n");
    }
    return 0;
}
