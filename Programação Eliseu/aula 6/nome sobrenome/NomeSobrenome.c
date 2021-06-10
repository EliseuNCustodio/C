#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
char nome[40],sobrenome[40];
char ola[40] = "sup, ";
char espaco[40] =" ";
puts("digite seu nome");
gets(nome);
puts("digite seu sobrenome");
gets(sobrenome);
strcat(nome , espaco);
strcat(nome ,sobrenome);
strcat (ola,nome);
puts(ola);
}
