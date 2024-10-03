#include<stdio.h>
int main(){
    int arr[8]= {1,2,3,4,5,6,7,8};
    int key = 4;
    int r=0,l=8,m=(r+l)/2;
    while(r<l){
        int mid = arr[m];
        if(key>mid){
            r=m+1;
            m=(r+l)/2;
        }
        else if (key<mid){
            l=m;
            m=(r+l)/2;
        }
        else{
            printf("the isndex is: %d",m);
            return 0;
        }
    }
    printf("key not found");
    return 0;
}