#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

int comparacao(char *palavra)
{
    char c;
    int i,cont=0,ma;
    printf("digite o caracter\n");
    scanf("%c",&c);
    ma=strlen(palavra);
    for (i=0;i<ma;i++)
    {
        if(c==palavra[i])
        {
            cont++;
        }

    }
    return cont;
}

int main()
{
    int m;
    char p[20];
    printf("digite a palavra\n");
    gets(p);
    m=comparacao(p);
    printf("%i",m);
    return 0;
}
