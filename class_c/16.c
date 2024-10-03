#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the another number: ");
    scanf("%d",&b);
    int c=sum(a,b);
    printf("%d",c);
    return 0;
}
int sum(int a, int b){
    int z;
    z=a+b;
    return z;
}