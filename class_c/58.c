#include<stdio.h>
int main(){
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int n=10,st=0,key;
    int end=n-1;
    int mid;
    printf("Enter the value to search: ");
    scanf("%d", &key);
    int beg=st;
    while(beg<=end){
        mid=(st+end)/2;
        if(key<a[mid]){
            st=0;
            end=mid;
        }
        else if(key>a[mid]){
            st=mid;
            end=n-1;
        }
        else if(key==a[mid]){
            printf("%d",mid+1);
            return 0;
        }
        else{
            beg = mid +1;
        }
    }
}