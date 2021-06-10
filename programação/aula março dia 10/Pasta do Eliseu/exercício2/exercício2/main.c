#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
char nome[10];
int main()
{
    char m[20]="Bem vindo, ";
    mensagem();
    strcat(m,nome);
    puts(m);
    return 0;
}

int mensagem()

{
    puts("qual seu nome?");
    gets(nome);
    return 0;
}
