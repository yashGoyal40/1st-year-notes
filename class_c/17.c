#include<stdio.h>
int sqare(int y);
int main(){
    for(int x=1;x<=10;x++){
        printf("%d ",sqare(x));
    }
    // puts("  ");
}
int sqare(int y){
    return y*y;
}