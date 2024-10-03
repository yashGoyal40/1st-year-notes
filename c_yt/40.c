#include<stdio.h>
struct data{
    int roll;
    char name[30];
    float marks;
};
struct data a={1 , "yash" , 12.4};
int main(){
    struct data *ptr = &a;
    printf("name is %s\n",a.name);
    printf("name is %s",ptr ->name);
}