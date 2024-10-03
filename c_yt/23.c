#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=10,b=9;
    int c;
    int *p,*q;
    p=&a;
    q=&b;
    c=*q;
    printf("the value of a = %d\n",a);
    printf("the value of a = %d\n",*p);
    printf("the address of a = %x\n",&a);
    printf("the address of a = %x\n",p);
    printf("the address of p = %x\n",&p);
    printf("the value of c = %d\n",c);
    return 0;
}