#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,n,i;
    printf("Enter the number of integers to be entered: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("memory not available\n");
    }
    else{
        printf("\nMemory alocation was successfull\n");
        printf("\nEnter the integer value ");
        for(i=0;i<n;i++){
            scanf("%d",p+i);
        }
        for(i=0;i<n;i++){
            printf("\n%d",*(p+i));
        }
    }
    return 0;
}