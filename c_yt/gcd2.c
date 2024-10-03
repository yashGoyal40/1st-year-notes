#include<stdio.h>
int main(){
    int a,b;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("enter another number: ");
    scanf("%d",&b);
    int n1=a,n2=b;
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    printf("the gcd is : %d",a);
    printf("\nthe lcm is : %d ",(n1*n2)/a);
    return 0;
}