#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int a=9;
    int y=sqrt(a);
    printf("%d\n",y);
    printf("%.0f\n",pow(a,y));  // a to the power y
    float x =9.1;
    printf("%.2f\n",floor(x));
    printf("%.2f\n",ceil(x));
    int m = -8;
    printf("%d",abs(m)); // stdlib 
}