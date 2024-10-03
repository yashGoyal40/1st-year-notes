#include<stdio.h>
// #include<yash.txt>

void swap(int x,int y);
int main(){
    int a=19,b=30;
    swap(a,b);
    printf("\nafter swaping: ");
    printf("%d %d\n",a,b);
    return 0;
}
void swap(int x , int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("%d %d\n",x,y);
}