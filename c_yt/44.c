//binary search 
// sorted array
#include<stdio.h>
int main(){
    int arr[22] = {1,2,3,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22};
    int l=0,r=22,m=(l+r)/2;
    int key,mid;
    printf("enter the key: ");
    scanf("%d",&key);
    while(l<r){
        mid  = arr[m];
        if(key<mid){
            r = m;
            m=(l+r)/2;
        }
        else if(key>mid){
            l=m+1;
            m=(l+r)/2;
        }
        else{
            printf("the key is found at %dth index",m);
            return 0;
        }
    }

    printf("the key is not found");
    return 0;
}