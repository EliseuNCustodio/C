#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
int calc(int n1, int n2,int n3);
int main()
{
    int m1,m2,m3;//x ;
    char nome[20];
    printf("digite o nome do aluno\n");
    gets(nome);
    printf("digite a nota 1\n");
    scanf("%i",&m1);
    printf("digite a nota 2\n");
    scanf("%i",&m2);
    printf("digite a nota 3\n");
    scanf("%i",&m3);
    //x=calc(m1,m2,m3);
    printf("a media do aluno %s eh %i",nome,calc(m1,m2,m3));
    return 0;
}

int calc(int n1, int n2,int n3)
{
    int media;
    media=(n1+n2+n3)/3;
    return media;
}
