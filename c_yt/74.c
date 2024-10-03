// coppy content of one file to another one
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("abc.txt","r");
    if(fp==NULL){
        printf("cant open f1");
    }

    fseek(fp,0,SEEK_END);
    int size=ftell(fp);
    fseek(fp,0,SEEK_SET);

    char *arr= (char*)malloc((size+1)*sizeof(char));
    int i=0;
    if(arr==NULL){
        printf("cant alocate memory");
    }
    while(!feof(fp)){
        *(arr+i) = fgetc(fp);
        i++;
    }
    fclose(fp);
    fp=fopen("123.txt","w");
    if(fp==NULL){
        printf("cant open f2");
    }
    for(int j=0;j<i-1;j++){
        fputc(*(arr+j),fp);
    }
    fclose(fp);
    free(arr);
    return 0;
}