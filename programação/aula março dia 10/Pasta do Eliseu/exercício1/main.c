#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <sys/time.h>
int g1=1;
int main()
{
    srand(time(NULL));
    int l1=2,l2=3,l3=4,l4=5,l5=6;
    char c='c',o='o',e='e',l='l',h='h';
    printf("as variaveis inteiras contem os numeros %i,%i,%i,%i,%i,%i\n",g1,l1,l2,l3,l4,l5);
    printf("O animal contido nas variaveis caracteres eh o %c%c%c%c%c%c",c,o,e,l,h,o);
    return 0;
}
