#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)

{
    int t,x=1;
    char n[40];
    printf("escreva o nome\n");
    gets(n);
    printf("\n\n\n");
    t=strlen(n);
    while(x<=t){
        puts(n);
        x++;
    }
    return 0;
}
