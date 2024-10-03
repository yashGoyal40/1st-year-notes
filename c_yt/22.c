// pointers in c
#include<stdio.h>
int main(){
    int a=1;
    printf("%d\n",a);
    printf("%d\n",&a);
    // 'a' name , '1' value , '&a' address of a
    // pointers are variable which stores address of any other variabele 
    // pointers are derived datatype
    int *p_name;
    int* ptr;
    int * p;
    // three ways to decalre pointers
    // it contains addresss of a int type of variable 
    // here int is not the datatype of pointer 
    // int is datatype of the variable whose address is contained by the pointer 
    // char *pp;
    // here datatype of pp is not char bnur pointer pp can contain address of a character 
    int *pl = &a;
    printf("%d",pl);
    float x;
    int s=1 , *ptr;
    ptr = &x;
    ptr = &s;
    printf("%d",*ptr);
    return 0;
}