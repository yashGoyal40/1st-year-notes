#include<stdio.h>
int main(){
    int w;
    printf("enter the number: ");
    scanf("%d",&w);
    for(int i=1;i<=w+1;i++){printf(" ");}
    printf("*");
    for(int i=1;i<=w;i++){
        printf("\n");
        for(int k=1;k<(w+2)-i;k++){printf(" ");}
        for(int j=i+1;j>=1;j--){printf("*");}
        for(int j=1;j<=i;j++){printf("*");}
    }
    printf("\n");
    for(int i=1;i<=(2*w)+3;i++){printf("*");}
    for(int i=w;i>=1;i--){
        printf("\n");
        for(int k=1;k<(w+2)-i;k++){printf(" ");}
        for(int j=i+1;j>=1;j--){printf("*");}
        for(int j=1;j<=i;j++){printf("*");}
    }
    printf("\n");
    for(int i=1;i<=w+1;i++){printf(" ");}
    printf("*");
    return 0;
}