#include<stdio.h>
int main(){
    int x,y,a,b;
    printf("please enter the length: ");
    scanf("%d",&x);
    printf("please enter the breadth: ");
    scanf("%d",&y);
    a=x*y;
    b=2*(a+b);
    if(a==b){
        printf("area=perimeter");
    }
    else if(a>b){
        printf("area>perimeter");
    }
    else{
        printf("area<perimeter");
    }
    return 0;
}