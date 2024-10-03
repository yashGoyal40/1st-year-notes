#include<stdio.h>
#include<string.h>
int main(){
    union Data{
        int intval;
        float floatval;
        char strval[20];
    };
    union Data dat;
    dat.intval=12;
    printf("int val = %d\n",dat.intval);
    dat.floatval=3.24;
    printf("int val = %.2f\n",dat.floatval);
    strcpy(dat.strval,"hello");
    printf("int val = %s\n",dat.strval);
    printf("%d\n",sizeof(dat));
    // it overrites the val

}