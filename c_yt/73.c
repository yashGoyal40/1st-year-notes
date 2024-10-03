//count new line 
#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("abc.txt","r");
    int count =0;
    while(!feof(fp)){
        if(fgetc(fp)=='\n'){
            count++;
        }
    }
    fclose(fp);
    printf("%d",count);
    return 0;
}