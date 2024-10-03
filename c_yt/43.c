//linear search
#include<stdio.h>
int main(){
    int arr[8] = {15,5,20,35,2,42,67,17};
    for(int i=0;i<8;i++){
        if(arr[i]==42){
            printf("42 found in %dth index",i);
            return 0;
        }
        else continue;
    }
    printf("42 not found");
    return 0;
}