#include<stdio.h>

int main(){
    int a[100] = {10,20,30,40,50,60,70,80};
    int n = 8;
    int loc = -1;

    int beg = 0, end = n - 1, mid,key;
    printf("Enter the value to search: ");
    scanf("%d", &key);

    while(beg<=end){
        mid = (beg+end)/2;
        if(a[mid] == key){
            loc = mid+1;
            break;
        }
        else if(a[mid]>key)
        {
            end = mid - 1;
        }
        else
            beg = mid+1;

    }
    if(loc == -1){
        printf("Not found");

    }
    else{
        printf("%d", loc);
    }
return 0;
}