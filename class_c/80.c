#include<stdio.h>
#include<string.h>
int main(){
    char ori[20],dup[20];
    char *z;
    printf("\n Enter your name: ");
    gets(ori);
    z=strcpy(dup,ori);
    printf("original string is : %s",ori);
    printf("\nDuplicate sting is : %s",dup);
    printf("\nvalue of z is : %s",z);
    return 0;
}