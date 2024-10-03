//fseek
#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("abc.txt","r");
    // rewind(fp);
    //fseek(fp,ofset,origin)
    fseek(fp,3,SEEK_SET);
    // SEEK_SET -  bignning
    // SEEK_CUR - current position
    // SEEK_END - end 
    printf("%c",fgetc(fp));
    return 0;
} 