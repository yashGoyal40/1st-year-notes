#include<stdio.h>
void oneton(int n,int l);
int main(){
    int a;
    printf("enter the n: ");
    scanf("%d",&a);
    int l=a;
    oneton(a,l);
    return 0;
}
void oneton(int n,int l){
    if(l==0) return;
    printf("%d",(n+1)-l);
    return oneton(n,l-1);
}