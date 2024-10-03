#include<stdio.h>
int main(){
    // null pointer 
    int *ptr = NULL;
    int *ptr1 = NULL;
    if(ptr!=NULL){
    printf("%d",*ptr);
    }
    else printf("NULL");
    return 0;
}