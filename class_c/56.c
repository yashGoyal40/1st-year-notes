#include<stdio.h>
void fun(int x);
int main(){
    int a[5] ={10,20,30,40,50};
    int i;
    for(i=0;i<5;i++){
        fun(a[i]);
    }
    return 0;
}
void fun(int x){
    printf("%d",x);
}