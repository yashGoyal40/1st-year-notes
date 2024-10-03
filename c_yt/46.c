#include<stdio.h>
int main(){
    char str[] = "Hello, World";
    printf("%s\n",str);
    int i=0;
    while(str[i] !='\0'){
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
    char str1[20]="hiiiii";
    printf("%s\n",str1);
    char str2[20]={'h','e','l','l','o',' ','w','o','r','l','d'};
    printf("%s",str2);
    return 0;
}