#include<stdio.h>
int sum(int a,int b);
int (*ptr)(int,int) = &sum;
// function pointer 
// return_type(*pointer_name)(datatype_of_arguments);
// int *ptr(int,int) 
//in this case ptr is a function that returns a int* value 

int main(){
    int *ptr1;
    //wild pointer
    int s=0;
    s=(*ptr)(2,3);
    printf("%d",s);
}
int sum(int a , int b){
    return a+b;
}