#include<stdio.h>
#include<stdlib.h>
int f(){
    int a = 10;
    return &a;
}
int main(){
    int * ptr = (int*)malloc(sizeof(int));
    *ptr = 10;
    printf("%d\n",*ptr);
    free(ptr);
    // its now dangling pointer 
    ptr = NULL;
    {
    int a=9;
    ptr = &a;
    printf("%d\n",*ptr);
    }
    printf("%d\n",*ptr);
    ptr = f();
    printf("%d\n",*ptr);


}