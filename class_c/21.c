#include<stdio.h>
int f(int x);
int main(){
    printf("%d",f(1));
    printf("%d",f(2));
    printf("%d",f(3));
    return 0;
}
int f(int x){
    if(x==0){
        return 0;
    }
    else{
        return x+f(x-1);
    }
}