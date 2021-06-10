#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float p1,p2,m;
main()
{
  printf("de a nota da primeira prova\n");
  scanf("%f",&p1);
  printf("de a nota da segunda proxima\n");
  scanf("%f",&p2);
  m=(p1+p2)/2;
  if (m>=6){
  printf("passou o aluno\n");
}
  else{
       printf("se ferrou o kra\n");
       }
  system("PAUSE");	
  return 0;
}
