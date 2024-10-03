#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0]= -1;
        size = 0;
    }

    void insert(int val){
        size++;
        int index = size;
        arr[index] = val;

        while(index>1){
            if(arr[index] > arr[index/2]){
                swap(arr[index],arr[index/2]);
                index = index/2;
            }
            else{
                return;
            }
        }
    }
}

int main()
{
    
    return 0;
}