#include<stdio.h>
void increment();
int main(){
    increment();
    increment();
    increment();
    return 0;
}
void increment(){
    int i =0;
    i++;
    printf("%d",i);
}