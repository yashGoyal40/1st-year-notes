#include<stdio.h>
int f(int x);
int main(){
    int a;
    while(a<=3){
        
    }
    printf("%d\n",f(1));
    printf("%d\n",f(2));
    printf("%d\n",f(3));
    return 0;
}
int f(int x){
    return (x*x+1);
}
