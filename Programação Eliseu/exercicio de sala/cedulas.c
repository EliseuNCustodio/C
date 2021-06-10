#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
int m1,m2,m3,m4,m5,p,o,i,u;
    printf("digite o valor a ser sacado\n");
    scanf("%i",&m1);
    p=m1/100;
    m2=m1-100*p;
    o=m2/50;
    m3=m2-50*o;
    i=m3/10;
    m4=m3-10*i;
    u=m4/5;
    m5=m4-u*5;
    if (p>0){
    printf("voce recebera %i notas de 100\n",p);
    }
    if (o>0){
    printf("%i notas de 50\n",o);
    }
        if (i>0){
    printf("%i notas de 10\n",i);
    }
            if (u>0){
    printf("%i notas de 5\n",u);
}
    if (m5>0){
    printf("%i notas de 1\n",m5);
    }
    return 0;
}
