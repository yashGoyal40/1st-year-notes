#include<stdio.h>
    int main(){
    int a[100], pos, i , n ;
    printf("Enter the no. of elemenet in array: \n");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for(i = 0 ; i<n ; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the location where you wnat to delete element:\n");
    scanf("%d", &pos);
    for(i = pos; i<n; i++){
        a[i-1] = a[i];
    }
    n--;
    printf("Restltant array is:\n");
    
    for(i = 0 ; i<n; i++){
        printf("%d\n", a[i]);
    }


   return 0;
}