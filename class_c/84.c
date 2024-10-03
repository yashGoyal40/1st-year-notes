#include<stdio.h>
#include<string.h>
int main(){
    char s[30];
    int count = 0,i;
    printf("Enter String: ");
    gets(s);
    for(i=0;s[i]!='\0';i++){
        count++;
    }
    printf("length = %d\n",count);
    return 0;
}