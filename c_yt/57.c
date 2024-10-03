// dynamic memory allocation 
#include<stdio.h>
#include<stdlib.h>
int main(){
    //malloc
    // memory alloc (genrally used with structures)
    // memory alocation there is storage so we have to use pointer 
    void* malloc(size_t size);
    void* ptr=NULL;
    ptr= (int*)malloc(4*sizeof(int));
    //in case of faliure it will return NULL 
    //initialize all values with garbage value
    return 0;
}