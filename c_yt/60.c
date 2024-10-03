#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    //calloc
    //continious alocation
    // malloc allocates single block of memory 
    // calloc alocate multiple blocks of memory if same size
    // calloc(size_t no_of_blocks,size_t size_of_each_block)
    //initiallise all blocks with zero
    int n,i;
    printf("enter total number of elements: ");
    scanf("%d",&n);
    int *ptr = (int*)calloc(n,sizeof(int));
    printf("enter values: ");
    for(i=0;i<n;i++){
        scanf("%d",(ptr+i));
    } 
    printf("the entred values are: ");
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;
}