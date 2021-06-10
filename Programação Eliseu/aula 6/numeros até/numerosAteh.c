#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int n,i;
printf("digite seu numero inteiro positivo\n");
scanf("%i",&n);
if (n<0)
{
printf("seu numero nao eh positivo\n");
}
else
{
i=0;
while(i<=n){
        printf("%i\n",i);
i++;}
}
}
