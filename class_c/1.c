#include <stdio.h>
#include<stdlib.h>
int main(){
    int a=234;
    int rev=0,rem;
    while(a=!0){
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    printf("%d",rev);
    return 0;
}