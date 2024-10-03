#include<stdio.h>
void main(){
    int a = 11;
    const int * p = &a;
    a=2;
    printf("%d",*p);
}