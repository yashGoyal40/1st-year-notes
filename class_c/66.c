#include<stdio.h>
int main(){
    FILE *fp;
    fp= fopen("test.txt","r");
    char s[50];
    fseek(fp,2,0);
    fgets(s,12,fp);
    printf("%s",s);
    fclose(fp);
    return 0;
}