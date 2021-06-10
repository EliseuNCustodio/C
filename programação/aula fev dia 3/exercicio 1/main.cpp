#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)

{
    int n,e,p=1;
    printf("digite o numero desejado\n");
    scanf("%i", &n);
    for(e=1;e<=n;e++){
            printf("%i\n",e);
            p=p*e;
    }
    printf("o produto eh igual a %i\n",p);
    return 0;
}
