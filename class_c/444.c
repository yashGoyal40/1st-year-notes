#include<stdio.h>
int x=5;
void fun();
int main(){
    int y=10;
    printf("%d",x);
    printf("%d",y);
    fun();
    return 0;
}
void fun(){
    int z=20;
    printf("%d",x);
    // printf("%d",y);
    printf("%d",z);

}