#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("abc.txt","a");
    if(fp==NULL){
        printf("shorry");
    }
    fprintf(fp,"\n%s","hello");
    fclose(fp);
    return 0;
}