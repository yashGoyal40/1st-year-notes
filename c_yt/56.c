#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "yash goyal";
    int arr[] = {1,2,3,4};
    int *arr_ptr = arr;
    printf("%d\n",arr_ptr);
    char *str_ptr = str;
    printf("%p\n",str_ptr);
    printf("%s\n",str_ptr);
    return 0;
}
