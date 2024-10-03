//dealloc
#include<stdio.h>
int main(){
    //free()
    int *ptr=(int*)malloc(10*sizeof(int));
    //calcualtions 
    free(ptr);
    //save memory 
    //if dealocated pointer is accesed it will show undefined behaviour
    //free will not delete till the memory is realocated
    //memory leak accour when we forgot to free the memory 
    // memory is unable to be re-used which grows over time to waste the memory
    return 0;
}