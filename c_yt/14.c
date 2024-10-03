#include<stdio.h>
int fibo(int n){
    if(n<=2) return 1;
    return fibo(n-1) + fibo(n-2);

}
int main(){
    int a;
    printf("enter the number of times: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        printf("%d\n",fibo(i));
    }
   
    // int b,c,sum;
    // b=1;
    // c=1;
    // printf("%d\n",b);
    // printf("%d\n",c);
    // for(int i=0;i<a;i++){
    // sum=b+c;
    // printf("%d\n",sum);
    // b=c;
    // c=sum;
    // }
    return 0;
}