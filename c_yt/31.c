#include<stdio.h>

int main(){
    // void pointer 
    // can store variable of any datatype
    void *vp;
    int a=5;
    vp=&a;
    // printf("%d",*vp);
    // can not derefrence void pointer direcly 
    // we have to typecast 
    printf("%d",*(int*)vp);
    char c = 'A';
    vp = &c;
    printf("%c",*(char *)vp);
    return 0;
}