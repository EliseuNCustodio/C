#include <stdio.h>
#include <stdlib.h>

float n1,n2,n3,p1,p2,p3,r1,r2,r3,rf;

main()
{
  printf("digite os pesos das provas em ordem\n");
  scanf("%f",&p1);
  scanf("%f",&p2);
  scanf("%f",&p3);
  printf("digite as notas das provas em ordem\n");
  scanf("%f",&n1);
  scanf("%f",&n2);
  scanf("%f",&n3);
  r1=n1*(p1/10);
  r2=n2*(p2/10);
  r3=n3*(p3/10);
  rf=10*(r1+r2+r3);
  printf("o resultado final eh de %f",rf);
  system("PAUSE");	
  return 0;
}
