#include<stdio.h>
// #include "temp.c"
// int sum=889;
int sum=98;

int myfunc(int a , int b){
    extern int sum;
    // sum = a+b;
    return sum;
}
int main(){
    int sum=myfunc(2,3);
    printf("sum: %d",sum);


    return 0;
}