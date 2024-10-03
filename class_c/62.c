#include<stdio.h>
struct Date{
        int dd;
        int mm;
        int yy;
    };
struct student{
    int rollno;
    char *name;
    float marks;
    struct Date dob;
};
int main(){
    struct student s1 = {1,"ram0",30,{30,1,2019}};
    struct student s3 = {2,"ram1",29,{30,1,2019}};
    struct student s2 = {3,"ram2",28,{30,1,2019}};

    printf("first student  =  %d %s %.2f %d-%d-%d\n",s1.rollno,s1.name,s1.marks,s1.dob.dd,s1.dob.mm,s1.dob.yy);
    printf("second student =  %d %s %.2f %d-%d-%d\n",s2.rollno,s2.name,s2.marks,s2.dob.dd,s2.dob.mm,s1.dob.yy);
    printf("third student  =  %d %s %.2f %d-%d-%d\n",s3.rollno,s3.name,s3.marks,s3.dob.dd,s3.dob.mm,s1.dob.yy);
    return 0;
}