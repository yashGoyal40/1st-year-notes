#include<stdio.h>
#include<string.h>
int main(){
    char ch;
    printf("enter a character: ");
    ch = getchar();
    // printf("character is equal to %c",ch);
    putchar(ch);
    putchar('\n');
    putch('m');
    // getch();
    fflush(stdin);
    char m[20];
    gets(m);
    puts(m);
    printf("why");
    return 0;
}