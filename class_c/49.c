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
    printf("\n reversed array\n");
    for(int i=l-1;i>=0;i--){
        printf("%d\n",array[i]);
    }
    int _sum=0;
    for(int i=0;i<l;i++){
        _sum+=array[i];
    }
}