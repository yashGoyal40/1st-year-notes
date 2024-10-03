#include<stdio.h>

int main(){
    int a[100] = {4, 15, 6, 10, 12, 20, 68, 34, 99, 80};
    int n = 10 , i , j , temp;
    for(i = 0; i< n -1; i++){
        for (j = 0; j<n-1-i; i++){
            if(a[j]> a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(i = 0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}