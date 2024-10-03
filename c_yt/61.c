#include<stdio.h>
#include<stdlib.h>
int main(){
    //realocation
    //resize
    //if already allocated
    //relalloc(void * ptr,new_size);
    int n;
    int *ptr = (int*)malloc(sizeof(int));
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
    //if possible expand the size of data block 
    // else it will alocate a new merory block and coppy the content of previous block and free the previous block
    //we can use bothe malloc/calloc
    // in case of calloc it will just add the blocks of same size 
    return 0;
}