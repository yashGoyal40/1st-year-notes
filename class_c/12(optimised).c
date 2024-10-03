#include<stdio.h>
int main(){
    int w;
    printf("enter the number: ");
    scanf("%d",&w);
    for(int i=1;i<=w;i++){
        //for upper part of kite
        printf("\n");
        for(int k=w;k>=i;k--)printf(" ");
        for(int j=i;j>=1;j--)printf("*");
        for(int j=1+1;j<=i;j++)printf("*");
    }
    for(int i=1;i<w;i++){
        //for lower part of kite
        printf("\n");
        for(int j=0;j<i+1;j++)printf(" ");
        for(int k=w-1;k>=i;k--)printf("*");
        for(int l=w-2;l>=i;l--)printf("*");
    }
    printf("\n");
    return 0;
}
