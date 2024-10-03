#include<stdio.h>
#include<stdlib.h>
int main(){
    int* p = (int*)malloc(10*sizeof(int));
    *p=1;
    *(p+1)=10;
    *(p+2)=20;
    *(p+3)=30;
    *(p+4)=40;
    for(int i=0;i<5;i++){
        printf("%d",*(p+i));
    }
    

    // printf("%d",p[1]);
    // int* ptr = (int*) calloc(10, sizeof(int));
    // printf("\n%d",ptr[1]);
    return 0;
}