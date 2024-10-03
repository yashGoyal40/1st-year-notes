#include<stdio.h>
int main(){
    /*
    null pointer 
    wild pointer 
    generic(void) pointer
    constant pointer 
    dangling pointer 
    */
    int *p;
    *p=10;
    printf("%d",*p);
    int a=100;
    int b=200;
    int* const ptr = &a;
    printf("%d",*ptr);
    
    return 0;
}