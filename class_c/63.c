#include<stdio.h>
struct Date{
        int dd;
        int mm;
        int yy;
    };
struct student{
    int rollno;
    char name[30];
    float marks;
    struct Date dob;
};
int main(){
    struct student s[3];
    for(int i=0;i<3;i++){
        printf("enter the roll no: ");  
        scanf("%d",&s[i].rollno);
        printf("enter the name no: ");  
        scanf("%s",&s[i].name);
        printf("enter the marks no: ");  
        scanf("%f",&s[i].marks);
        printf("enter the dob no: ");  
        scanf("%d-%d-%d",&s[i].dob.dd,&s[i].dob.mm,&s[i].dob.yy);
        printf("\n###############################\n");
    }

    for(int i=0;i<3;i++){
        printf("%d %s %.2f %d-%d-%d\n",s[i].rollno,s[i].name,s[i].marks,s[i].dob.dd,s[i].dob.mm,s[i].dob.yy);
    }
    return 0;
}