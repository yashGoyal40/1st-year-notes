#include<stdio.h>
void main(){
    int a;
    printf("enter the day in numbers: ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednusday");
        break;
    case 4:
        printf("thursday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("saturday");
        break;
    case 7:
        printf("sunday");
        break;
    default:
        printf("enter A valid day");
        break;
    }
}