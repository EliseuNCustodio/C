#include<stdio.h>
#include<stdlib.h>

//float med(float b1, float b2, float b3);

float med(int b1, int b2, int b3)
{
    float val=0;
    val = b1+b2+b3;
    val = val/3;
    return val;    
}

main()
{
      int a[3], i;
      for(i=0;i<3;i++)
      {
                      printf("Digite a nota %i:\n", i+1);
                      scanf("%i",&a[i]);
      } 
      printf("A media de %i, %i, %i eh %f \n",a[0],a[1],a[2], med(a[0],a[1],a[2]));
      system("pause");
}
