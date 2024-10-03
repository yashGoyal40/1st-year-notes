#include <stdio.h>
int m(){
    char flag;
        printf("Do you want to continue: ");
        scanf("%c", &flag);
        printf("%c",flag);
        return 0;
}


void ma()
{
    float a, b, c, d, e,f;
    char flag;
    flag ='c';
    do
    {
        printf("please enter the number:  ");
        scanf("%f", &a);
        printf("please enter the number:  ");
        scanf("%f", &b);
        printf("please enter the number:  ");
        scanf("%f", &c);
        printf("please enter the number:  ");
        scanf("%f", &d);
        printf("please enter the number:  ");
        scanf("%f", &e);
        printf("the average of the number you have entered is %f\n", (a + b + c + d + e) / 5);
        printf("Do you want to continue: ");
        scanf("%s",&flag);
    }while (flag == 'y');
    return;
}
void main(){
    int a,b,c;
    printf("enter three numbers: ");
    scanf("%d",&a);
    printf("enter three numbers: ");
    scanf("%d",&b);

    printf("enter three numbers: ");
    scanf("%d",&c);

    if(a>b && a>c)
        printf("%d is the greatest",a);
    else if(b>a && b>c)
        printf("%d is the greatest",b);
    else if(c>a && c>b)
        printf("%d is the greatest",c);
    else{
        printf("not good");
    }
    
}