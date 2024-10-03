#include<stdio.h>
int main1(){
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    if(x%2==0){
        goto even;
    }
    else{
        goto odd;
    }
    even:
        printf("%d is even",x);
        return 0;
    odd:
        printf("%d is odd",x);
        return 0;

}
int main(){
    float l=1.1;
    printf("%15.2f,%3.2f",l,l);
    return 0;
}