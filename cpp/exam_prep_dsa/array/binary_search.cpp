//will work for sorted
#include<bits/stdc++.h>
using namespace std;


// void binary_search(int* arr,int key,int size){
//     int st = 0;
//     int end = size-1;
    // int mid = (end+st)/2;
    // int mid = (end/2 + st) - (st/2);

//     while(st<=end){
//         int mid = (end/2 + st) - (st/2);

//         if(arr[mid]<key){
//             st = mid+1;
//         }
//         else if(arr[mid]>key){
//             end = mid-1;
//         }
//         else{
//             cout<<"pos is: "<<mid;
//             return;
//         }
//     }
//     cout<<"element not found";
// }


bool binary_search(int* arr,int key,int size){
    int st = 0;
    int end = size-1;

    while(st<=end){
        int mid = (st+end)/2;
        if(key == arr[mid]){
            return true;
        }
        else if(key>arr[mid]){
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return false;
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    binary_search(arr,8,10);

  
 
    return 0;
}