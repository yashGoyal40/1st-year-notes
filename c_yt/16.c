#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    if(b%2==0){
        int c= power(a,b/2);
        return c*c;
    }
    else{
        int c= power(a,b/2);
        return c*c*a;
    }
}
int main(){
    int a,b;
    printf("enter the base: ");
    scanf("%d",&a);
    printf("enter the power: ");
    scanf("%d",&b);
    printf("%d",power(a,b));
}