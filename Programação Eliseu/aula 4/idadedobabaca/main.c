#include <stdio.h>
#include <stdlib.h>
int a,an,i;
main()
{
  printf("digite o ano atual\n");
  scanf("%d",&a);
  printf("digite o ano que naceste\n");
  scanf("%d",&an);
  i=a-an;
  printf("sua idade eh de %d ,seu noob na matematica\n",i);
  system("PAUSE");	
  return 0;
}
