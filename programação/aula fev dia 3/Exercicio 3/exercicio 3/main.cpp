#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)

{
    int n,s=0;
    float m=0,c=0;
    do{
    printf("digite o numero e digite -99 para terminar o programa e receber os valores\n");
    scanf("%i",&n);
    if(n!=-99){
        s=s+n;
        c++;
    }
    }while (n!=-99);
    m=s/c;
    printf("media eh %f e soma eh %i",m,s);
    return 0;
}
