#include<stdio.h>
int main(){
    struct date
    {
       int dd;
       int mm;
       int yy;
    };

    struct details
    {
        char name[20];
        struct date dob;
    };
    
    struct details contacts[40];

    contacts[1].name="yash";
    contacts[1].dob.dd=12;
    contacts[1].dob.mm=12;
    contacts[1].dob.yy=2012;

    struct details det;
    det.name
}