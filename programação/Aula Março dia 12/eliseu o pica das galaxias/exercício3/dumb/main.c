#include <stdio.h>
#include <stdlib.h>
int calculo(int n1,int n2,int n3);
int main()
{
    int n1,n2,n3,media;
    scanf("%i",&n1);
    scanf("%i",&n3);
    scanf("%i",&n2);
    media=calculo(n1,n2,n3);
    printf("%i",media);
    return 0;
}
int calculo(n1,n2,n3)
{
    int media2=0;
    media2=(n1+n2+n3)/3;
    return media2;
}
