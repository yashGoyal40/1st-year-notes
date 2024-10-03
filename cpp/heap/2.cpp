#include<bits/stdc++.h>
using namespace std;

//max heap
class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0] =-1;
        size = 0;
    }

    void insert(int val){
        size++;
        int index = size;
        arr[index] = val;

        while(index > 1){
            if(arr[index] > arr[index/2]){
                swap(arr[index],arr[index/2]);
                index = index/2;
            }
            else{
                return;
            }
        }
    }

    //delete
    void deletion(){
        if(size == 0){
            cout<<"nothing to delete";
            return;
        }
        arr[1] =arr[size];
        size--;
        int index = 1;
        while(index < size){
            int leftIndex = 2*index;
            int rightIndex = 2*index+1;
            if(leftIndex<size && arr[index] < arr[leftIndex]){
                swap(arr[index],arr[leftIndex]);
                index = leftIndex;
            }
            else if(rightIndex<size && arr[index] < arr[rightIndex]){
                swap(arr[index],arr[rightIndex]);
                index = rightIndex;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

int main()
{
    heap h;
    h.insert(50);
    h.insert(53);
    h.insert(55);
    h.insert(60);

    h.print();
    h.deletion();
    h.print();
 
    return 0;
}