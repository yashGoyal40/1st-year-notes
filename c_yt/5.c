#include<stdio.h>
void hello(){
    if(3<4){
        goto a;
    }
    else{
        printf("ok\n");
        return;
    }
a:
    printf("nice");
    return;
}
int main(){
    printf("hello\n");
    hello();
}