#include<stdio.h>
int main(){
    //a+ mode
    //reading & appending
    //creates a new file
    FILE *fp;
    fp=fopen("abc.txt","a+");
    while(!feof(fp)){
        char ch = fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}