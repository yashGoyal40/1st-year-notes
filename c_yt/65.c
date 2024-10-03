#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    char ch = 'a';
    fp=fopen("abc.txt","w");
    if(fp==NULL){
        printf("sorry");
        exit(1);
    }
    //w write (open / create -> open)
    //r read
    //a append
    fputc(ch,fp);
    fputc('\n',fp);
    char ch1[]="hello file";
    fputs(ch1,fp);
    fputc('\n',fp);
    for(int i=0;i<(int)strlen(ch1);i++){
        fputc(ch1[i],fp);
    }
    fprintf(fp,"\n%d %s\n",3,ch1);
    fclose(fp);
    return 0;

}