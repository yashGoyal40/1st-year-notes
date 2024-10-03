//stair path
/*
 eg  -  5 stairs 
 11111
 1112
 1121
 1211
 2111
 221
 122
 212
 -- 8 ways 
*/
#include<stdio.h>

int stair(int n){
    if(n<=2) return n;
    if(n==3) return 4;
    return stair(n-1)+stair(n-2) + stair(n-3);
}

int main(){
    int a;
    printf("enter the number of stairs: ");
    scanf("%d",&a);
    printf("%d",stair(a));
    return 0;
}