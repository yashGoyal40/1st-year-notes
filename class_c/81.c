#include<stdio.h>
int main(){
    for(int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            printf("  ");
        }
        for(int k=0;k<=i;k++){
            printf("24");
        }
        for(int l=0;l<1;l++){
            printf("+");
        }
        for(int k=0;k<=i;k++){
            printf("24");
        }
        printf("\n");
    }
    return 0;
}