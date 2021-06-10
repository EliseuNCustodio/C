#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int i,n[5],s=0;
    printf("digite os numeros que pretende somar\n");
    for(i=0;i<=4;i++)
    {
        scanf("%i",&n[i]);
    }
    for(i=0;i<=4;i++)
    {
        s=s+n[i];
    }
    for(i=0;i<4;i++){
        printf(" %i +",n[i]);
        }
        printf ("%i = ",n[4]);
        printf("%i",s);

    return 0;
}
