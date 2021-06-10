#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[40];
    int i;
printf("digite uma palavra\n");
gets(palavra);
for ( i = 0 ; i<strlen(palavra)-1; i++);
{
    printf("%s\n",palavra);
}
}
