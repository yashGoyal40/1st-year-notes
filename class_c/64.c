#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("data.txt","w");
    char c;
    c=fgetc(fptr);
    while(c != EOF){
        c=fgetc(fptr);
        putchar(c);
    }
    fclose(fptr);
    return 0;
}