#include<stdio.h>
int main(){
    int l;
    printf("enter the number of element\n");
    scanf("%d",&l);
    int array[500];
    for(int i=0;i<l;i++){
        printf("enter a number \n");
        scanf("%d",&array[i]);
    }
    int _sum=0;
    for(int i=0;i<l;i++){
        _sum+=array[i];
    }


    printf("\n The SUM of all elements is \n%d\n",_sum);
    float sum = _sum;
    printf("\n The AVR of all elements is \n%f\n",sum/l);
}