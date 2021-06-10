#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char n1[10] ,n2[10], n3[21] ;
    int l1,l2,c,l3,c2=0;
    printf("digite o primeiro nome\n");
    gets(n1);
    printf("digite o segundo nome\n");
    gets(n2);
    l1=strlen(n1);
    l2=strlen(n2);
    l3=l1+l2;
    for(c=0;c<=l1;c++)
    {
        n3[c]=n1[c];
    }
    for(c=l1;c<=l3;c++)
    {
        n3[c]=n2[c2];
            c2++;
    }
    puts(n3);
    //printf("%s\n%s\n%s\n %i\n %i\n%i\n%i\n%i",n1,n2,n3,l1,l2,l3,c,c2);
    return 0;
    system("pause");
}
