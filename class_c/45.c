#include<stdio.h>
int main(){
    int array[5]={1,3,4,5,6};
    int _sum=0;
    for(int i=0;i<5;i++){
        _sum+=array[i];
    }
    printf("\n the sum of all elements is %d",_sum);
}