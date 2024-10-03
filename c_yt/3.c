#include<stdio.h>
#include<conio.h>
#define N 5
#define sqr(x) (x *x)
int main(){
    int roll[7]={0,1,2,3,4};
    for(int i=0;i<7;i++){
        printf("%d",roll[i]);
    }
    printf("\n%d",sqr(5));
    return 0;
}
