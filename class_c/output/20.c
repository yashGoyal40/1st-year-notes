#include<stdio.h>
int main(){
    int a=3;
    int *h = &a;
    printf("%d  %d  %p",a,h,h);
    return 0;
}