#include<bits/stdc++.h>
using namespace std;
//max heap
class heap{
    private: 
    int arr[100];
    int size;

    public: 
    heap(){
        size = 0;
        arr[0] = -1;
    }

    void insert(int val){
        size++;
        int index = size;
        arr[index] = val;

        while(index >1){
            if(arr[index] > arr[index/2]){
                swap(arr[index],arr[index/2]);
                index = index/2;
            }
            else{
                return;
            }
        }
    }

    void deletion(){
        if(size == 0){
            cout<<"underflow";
            return;
        }
        arr[1] = arr[size];
        size--;
        int index = 1;
        while(index < size){
            int leftIndex = 2*index;
            int rightIndex = 2*index + 1;
            if(leftIndex <= size &&  arr[index] < arr[leftIndex]){
                swap(arr[index],arr[leftIndex]);
                index = leftIndex;
            }
            else if(rightIndex <= size &&  arr[index] < arr[rightIndex]){
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
    h.insert(70);
    h.insert(60);
    h.insert(80);
    h.insert(10);
    h.print();
    h.deletion();
    h.print();
    return 0;
}