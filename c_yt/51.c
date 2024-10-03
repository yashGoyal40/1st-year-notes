#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "yash";
    //strrev()
    char tmp[8];
    strcpy(tmp,str);
    printf("%s\n",tmp);
    strrev(str);
    printf("%s",str);
    if(strcmp(tmp,str)==0){
        printf("\nits palindrome");
    }
    else printf("\nits not palindrome");
    return 0;
}