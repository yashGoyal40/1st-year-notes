// buble sorting
#include<stdio.h>
int main(){
    int arr[22] = {22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int n=22,temp;
    while(n>0){
        for(int i=1;i<n;i++){
            if(arr[i-1]>arr[i]){
                temp=arr[i-1];
                arr[i-1]=arr[i];
                arr[i] = temp;
            }
        }
        n--;
    }
    for(int i=0;i<22;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}