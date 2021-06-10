#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

int theactual()
{
    int x,y,z;
    x=rand()%10;
    y=rand()%10;
    z=x+y;
    return z;
}
