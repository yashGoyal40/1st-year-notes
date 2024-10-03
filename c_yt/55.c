#include<stdio.h>
#include<string.h>
int main(){
    char a[7] = "yash" , b[7] = "goyal";
    //strcat(destination,source);
    strcat(a,b);
    printf("%s\n",a);
    strncat(a,b,4);
    printf("%s\n",a);

}