#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    char ch[20];
    // ch = getchar();
    // printf("%c",ch);
    // ch = getch();
    // printf("%c",ch);
    // ch=getche();
    // printf("%c",ch);
    gets(ch);
    printf("%s\n",ch);
    for(int i=0;i<5;i++){
        printf("%c\n",ch[i]);
    }
    getch();
    return 0;
}