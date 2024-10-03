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
    printf("\n forward array \n");
    for(int i=0;i<l;i++){
        printf("%d\n",array[i]);
    }
}