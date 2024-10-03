#include<stdio.h>
#include<string.h>
int main(){
    //strcmp
    //strcnmp
    char a[5] = "yash",b[5] = "yasg";
    int l,m;
    l=strcmp(a,b);
    m=strncmp(a,b,3);
    printf("%d\n",l);
    printf("%d",m);
    return 0;
}