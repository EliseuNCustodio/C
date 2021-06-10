#include <stdio.h>
#include <stdlib.h>

int main()

{
    float n,p=0,s;
    printf("digite o numero com o qual quer trabalhar\n");
    scanf("%f",&n);
    do
    {
        printf("%f\n",p);
        p=p+1;
    }while(p<=n);
    s=(n*(n+1))/2;
    printf("a soma de todos os termos eh %f",s);
    return 0;
}
