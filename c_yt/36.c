#include<stdio.h>
int main(){
    int a,b,sum;
    int add(int*,int*);
    printf("enter first value: ");
    scanf("%d",&a);
    printf("enter second value: ");
    scanf("%d",&b);
    sum = add(&a,&b);
    printf("%d",sum);
    return 0;
}
int add(int *x, int *y){
    int z;
    z=*x+*y;
    return z;
}