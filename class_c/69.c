#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int *p = arr;
    for(int i=0;i<9;i++){
        printf("%d\n",(p+i));
    }
    for(int i=0;i<9;i++){
        printf("%d\n",*(p+i));
    }
    return 0;
}