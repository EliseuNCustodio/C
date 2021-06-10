#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
int n,a;
int main()
{
    printf("Digite o numero\n");
    scanf("%i",&n);
    numero();
    printf("O antecessor do numero eh %i",a);
    return 0;
}
int numero()
{
    a=n-1;
    return a;
}
