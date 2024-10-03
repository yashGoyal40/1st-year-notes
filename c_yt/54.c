#include<stdio.h>
#include<string.h>
int main(){
    //strcpy
    //strncpy
    char a[5] = "yash";
    char b[3];
    strcpy(b,a);
    //that will copy a in b
    // second argument will be coppied in first
    //strcpy(destination,source);
    printf("%s\n",b);
    strncpy(b,a,sizeof(b)-1);
    b[sizeof(b)-1] = '\0';
    printf("%s\n",b);
    return 0;
}