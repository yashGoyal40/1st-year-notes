#include<stdio.h>
int main(){
    //scanf
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    printf("you entered: %s\n",str);

    // fgets
    char str1[100];
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("you entered: ");
    puts(str1);
    //overflow because both scanf and fgets is used altogether ie. because of '\n'

    char str2[100];
    printf("Enter a string: ");
    fgets(str2, sizeof(str2), stdin);
    printf("you entered: %s\n",str2);

    char str3[100];
    printf("enter the string: ");
    gets(str3);
    printf("you entered: ");
    puts(str3);

    

}