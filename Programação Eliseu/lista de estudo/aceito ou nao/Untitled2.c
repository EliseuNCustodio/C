#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char n;
    int s,i;
printf("qual seu nome\n");
gets(n);
printf("eh homem(h) ou mulher(m)?\n");
scanf("%i",&s);
printf("qual sua idade?");
scanf("%i",&i);
if (i<25)
{
printf("NAO ACEITO\n");
break;
}
if (s=='h');{
printf ("NAO ACEITO\n");
break;
}
printf("ACEITA\n");
}
