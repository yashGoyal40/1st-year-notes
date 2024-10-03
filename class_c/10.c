#include<stdio.h>
int main(){
    int c,d,sum;
    printf("please enter the smaller number: ");
    scanf("%d",&c);
    printf("please enter bigger number: ");
    scanf("%d",&d);
    for(sum=c;d>c;d--){
        sum=sum+d;
    }
    printf("%d",sum);
    return 0;

}