#include<stdio.h>


int main(){
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int n = 10, i;
    int key, loc = -1;
    printf("Enter the value to search: ");
    scanf("%d", &key);
    for(i = 0; i<n; i++){
        if (a[i] == key){
            loc = i + 1;
            break;
        }
    }
    if(loc == -1){
        printf("Not Found");
    }
    else{
        printf("%d", loc);
    }
    return 0;
}