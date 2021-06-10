#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *comp(int m);
int main()
{
    int n;
    printf("digite valor\n");
    scanf("%i",&n);
    printf("%s",comp(n));
        return 0;
}
char *comp(int m)
{
    char s[]="positivo";
    char n[]="negativo";
    if (m<0)
    {
        return s;
    }
    else
    {
        return n;
    }
    puts(s);
    puts(n);
}
