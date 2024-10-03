#include<stdio.h>
int main(){
   //w+ mode
   // read and write 
   //create file
   // erase all data from file
   FILE *fp;
   fp=fopen("abc.txt","w+");
   fputs("yash",fp);

    fseek(fp, 0, SEEK_SET);


   char ch[5];
   fgets(ch,5,fp);
   printf("%s",ch);
   fclose(fp);
   return 0; 
}