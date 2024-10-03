#include<stdio.h>
void swap(int *x , int *y);
int main(){
    int a=5 , b=6;
    // printf("before swaping a=%dand b=%d\n",a,b);
    swap(&a,&b);
    return 0;
}
void swap(int *x , int *y ){
    printf("before swaping a=%p and b=%p\n",x,y);
    int temp;
    temp =x;
    x=y;
    y=temp;
    printf("after swaping a=%p and b=%p",x,y);

}