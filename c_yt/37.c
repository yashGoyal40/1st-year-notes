#include<stdio.h>
int main(){
    char *s[] = {
        "yash",
        "goyal",
        "is",
        "alive"
    };
    printf("string = %s\n",*s+1);
    printf("string = %s\n",*(s+1));
    printf("string = %s\n",*(s+3)+3);
    int *a[] = {10,20,30,40,50};
    printf("%d",*a+1);
    return 0;
}