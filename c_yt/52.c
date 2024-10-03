#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "hello";
    strupr(str);  //strupr
    printf("%s\n",str);
    strlwr(str);  //strlwr
    printf("%s\n",str);
    return 0;
}