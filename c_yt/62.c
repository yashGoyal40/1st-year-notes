#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int *ptr = (int*)calloc(1,sizeof(int));
    printf("enter the number of integers: ");
    scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int));
    printf("enter values: ");
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    } 
    printf("the entred values are: ");
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;
}