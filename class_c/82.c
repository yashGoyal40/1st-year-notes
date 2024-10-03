#include<stdio.h>
struct data
{
    char x;
    short int y;
    float z;
};

union dat
{
    char x;
    short int y;
    float z;
};

int main(){
    struct data a;
    union dat b;
    printf("%d",sizeof(a));
    printf("%d",sizeof(b));
    return 0;
}
