#include<stdio.h>
int main(){
    int a,b,z;
    printf("enter the first int: ");
    scanf("%d",&a);
    printf("enter the second int: ");
    scanf("%d",&b);
    // z=a/b;
    // z=a-(z*b);
    z=a%b;
    printf("the remainder is: ");
    printf("%d",z);
    printf("\nthe remainder when %d is devided by %d will be equal to %d",a,b,z);
    return 0;
}