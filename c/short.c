#include<stdio.h>
int main(){
    short m=555; /*short 2 byte  
     n bit = 2^n numbers
     2 byte = 16 bit
     2^16 = 65536(-32768 to 32767)
     int 4 bytes
     long 8 byte
     long long 16 byte
     char 1 byte
    */
    printf("%d",m);
    int z = 2 % -8;
    printf("%d",z);
    return 0;
}