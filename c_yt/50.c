#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "a";
    printf("%d",sizeof(str)); //2 ('\0')
    printf("%d",strlen(str)); //1    
    return 0;
}