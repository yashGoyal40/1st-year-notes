#include<stdio.h>
void sum(int n,int s);
int main(){
    int a;
    printf("enter the n: ");
    scanf("%d",&a);
    int s=0;
    sum(a,s);
    return 0;
}
// int sum(int n){
//     if(n==0) return 0;
//     return n+sum(n-1);
// }
void sum(int n, int s){
    if(n==0){
     printf("%d",s);
     return;
    }
    sum(n-1,s+n);
}