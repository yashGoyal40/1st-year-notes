#include<stdio.h>
int main(){
    int a,b;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the first number: ");
    scanf("%d",&b);
    int max=(a>b)?a:b;
    int min=(a>b)?b:a;
    printf("max: %d\nmin: %d",max,min);
    
    return 0;
}