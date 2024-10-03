#include <stdio.h>

void main()
{
   int b,s,r;
   float a=3e4;
   b=3;
   s=a,b;
   r=(a,b);
   printf("%f",a);
   printf("%d",b);
}
