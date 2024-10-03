#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("data.txt","w");
    int rollno;
    char name[30];
    float marks;
    for(int i=0;i<3;i++){
    printf("Enter roll no: ");
    scanf("%d",&rollno);
    printf("Enter name: ");
    scanf("%s",name);
    printf("Enter marks: ");
    scanf("%f",&marks);
    fprintf(fp,"%d %s %.2f",rollno,name,marks);
    }
    fclose(fp);
    printf("Data saved");
    return 0;


}