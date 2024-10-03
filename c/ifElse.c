#include<stdio.h>
int main(){
    int a;
    printf("enter a positive integer: ");
    scanf("%d",&a);
    if(a==0){
        printf("its neither even neither odd");
    }
    else if (a%2==0)
    {
        printf("the given integer is even");
    }
    
    else{
        printf("the given integer is odd");
    }
    return 0;
}