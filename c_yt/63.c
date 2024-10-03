#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,n;
    printf("enter the number of integers: ");
    scanf("%d",&n);
    ptr=(int*)realloc(NULL,n*sizeof(int)); // in this case its working as malloc
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