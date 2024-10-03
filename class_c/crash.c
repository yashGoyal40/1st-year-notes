#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=0;
    int* ptr = (int*)malloc(1000000000);
    for(int i=1;i>a;i++){
        int a= *(ptr+1);
        printf("%d",a);
    }
    return 0;
}