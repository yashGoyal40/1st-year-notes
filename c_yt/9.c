#include<stdio.h>
// int main(){
//     int n=10;
//     for(int i=1;i<=n;i++){
//         int l=1;
//         for(int j=1;j<=i;j++){
//             l=l*j;
//         }
//         printf("%d\n",l);
//     }
//     return 0;
// }
int factorial(int n);
int main(){
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    printf("the factorial of %d is %d",a,factorial(a));
    return 0;
}

int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*factorial(n-1);
}