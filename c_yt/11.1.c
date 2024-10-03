#include<stdio.h>
void inc(int n);
int main(){
    int a;
    printf("enter the n: ");
    scanf("%d",&a);
    inc(a);
    return 0;
}
void inc(int n){
    if(n==0) return; 
    printf("%d\n",n); //code
    inc(n-1); //call
    printf("%d\n",n); //code
}