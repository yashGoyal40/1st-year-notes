#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,num=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        num=num*10+(arr[i]%10);
    }
    if(num%10==0){
        printf("yes");
    }
    else{
        printf("No");
    }
}

