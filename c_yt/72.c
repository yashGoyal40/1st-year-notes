//ftell func
#include<stdio.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("abc.txt","r");
    fseek(fp,4,SEEK_SET);
    printf("%d",ftell(fp));
    rewind(fp);
    printf("%d",ftell(fp));
    fclose(fp);
    return 0;
}