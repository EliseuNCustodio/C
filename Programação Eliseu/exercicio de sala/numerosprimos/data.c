#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,m,a;
    printf("digite que dia eh hoje\n");
    scanf("%i",&d);
    printf("digite o mes\n");
    scanf("%i",&m);
    printf("digite em que ano estamos\n");
    scanf("%i",&a);
    if (a<2013) { printf("sua data eh invalida por causa do ano\n"); }
    if (m>12) { printf("sua data eh invalida por causa do numero de meses\n"); }
    if (d>31){printf("sua data eh invalida por causa do dia\n");}


}
