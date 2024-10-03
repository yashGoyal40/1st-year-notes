#include<stdio.h>
int main(){
    float a[3][3],b[3][3],c[3][3];
    printf("\nenter the element of first matrix \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter a[%d][%d]: ",i,j);
            scanf("%f",&a[i][j]);
        }
    }
    printf("enter the element of first matrix \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter b[%d][%d]: ",i,j);
            scanf("%f",&b[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("sum of matrix is\n");
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%.2f ",c[i][j]);
        }
    }
}