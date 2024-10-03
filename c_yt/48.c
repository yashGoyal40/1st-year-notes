#include<stdio.h>
int main(){
    char ch = 'A';
    putchar(ch);
    ch++;
    ch = ch+1;
    printf("%c",ch);
    char ch1 = 'C';
    ch1--;
    ch1 = ch1 -1;
    putchar(ch1);
    ch1 = ch1+32;
    printf("%c",ch1);
    return 0;
    // all operations like (<, >, <=, >=, ==, !=) will work
}