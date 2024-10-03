#include<stdio.h>
int main(){
    int w;
    printf("enter the number: ");
    scanf("%d",&w);
    for(int i=1;i<=w;i++){
        printf("\n");
        for(int j=1;j<=i;j++){printf("%d",j);}
    }
    printf("\n");
    for(int k=1;k<=w+1;k++){printf("%d",k);}
    for(int i=w;i>=1;i--){
        printf("\n");
        for(int j=1;j<=i;j++){printf("%d",j);}
    }
    return 0;
}