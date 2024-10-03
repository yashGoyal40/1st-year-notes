#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int i;
    int *p;
    printf("\n First value is:%d",*p);
    p+=1;
    printf("\n second value is:%d",*p);
    *p=45;
    p+=2;
    *p=-2;
    *(p+4)=0;
    printf("\n Modified array is:");
    p=arr;
    for(i=0;i<8;i++){
        printf("\n%d",*(p+i));
    }
    return 0;
}