#include<stdio.h>
int main(){
    int a,b;
    printf("enter the first number:  ");
    scanf("%d",&a);
    printf("enter the second number:  ");
    scanf("%d",&b);
    sum(a,b);
    return 0;
}
void sum(a,b){
 printf("The sum of two numbers is %d \n",a+b);
}