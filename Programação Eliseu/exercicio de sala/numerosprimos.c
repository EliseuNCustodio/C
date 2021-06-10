#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("digite seu numero\n");
    scanf("%i",&n);
if(n==2)
{
    printf("seu numero eh primo");
}
else{
        while(i<n)
        {
            if(n%2==0){
                    printf("seu numero nao eh primo\n");
            break;}

            if(n%i==0){
                    printf("seu numero eh primo, omedeto\n");
            break;}

            else {i++;
            if(i==(n+1)){printf("nao eh primo\n");  break;}}
        }
}
    return 0;
}
