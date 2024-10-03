#include<stdio.h>
void ntoone(int n);
int main(){
    int a;
    printf("enter the n: ");
    scanf("%d",&a);
    ntoone(a);
    return 0;
}
void ntoone(int n){
    if(n==0){
        return;
    }
    printf("%d\n",n);
    ntoone(n-1);
}