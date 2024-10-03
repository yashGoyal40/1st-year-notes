#include<stdio.h>
int main(){
    //r+  (read and write )
    //but it will not create a file 
    FILE *fp;
    //we can modify the file in this mode
    fp=fopen("abc.txt","r+");
    fputc('z',fp);
    fputs("\nyash\n",fp);
    return 0;
}