#include<stdio.h>
int main2(){
    int a=1,b=2,c=3,d=4,e=5,f=6;
    int max;
    max= (e>f)?((a>b)?a:b):((c>d)?c:d);
    printf("%d",max);
    return 0;
}
int main(){
    int a;
    char b;
    printf("enter a number: ");
    scanf("%d",&a);
    (a%2==0)?(printf("even")):(printf("odd"));
    return 0;
}

