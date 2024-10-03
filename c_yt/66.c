#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("abc.txt","r");
    if(fp==NULL){
        printf("could not open file: ");
    }
    // char a=fgetc(fp);
    char ch;
    while(ch != EOF){
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    char str[45];
    fp=fopen("abc.txt","r");
    fgets(str,45,fp);
    printf("%s",str);
    fclose(fp);
    return 0;
}