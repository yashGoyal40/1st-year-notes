#include<stdio.h>
#define a(x,y) x*y
#define b(x) x*x
int main(){
    int a =5;
    printf("%d",a(a,4));
    printf("%d",b(a));
    return 0;
}