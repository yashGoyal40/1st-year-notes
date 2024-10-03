// circuler queue 
#include<bits/stdc++.h>
using namespace std;

class Queue{
    int size ;
    int front;
    int rare;
    int* arr;
    public:


    Queue(int n){
        size = n;
        front = rare = -1;
        arr = new int[n];
    }

    bool is_full(){
        if((front == 0) && (rare  == (size-1))){
            return true;
        }
        if(rare == (front-1)%size){
            return true;
        }

        return false;
    }

    bool is_empty(){
        if(front == -1){
            return true;
        }
        return false;
    }

    void push_ele(int l){
        if(is_full()){
            cout<<"queue is full";
            return;
        }
        else if(is_empty()){
            rare = front = 0;
        }
        else if(rare == (size-1)){
            rare = 0;
        }
        else{
            rare++;
        }

        arr[rare] = l;
        return;
    }

    void pop_ele(){


        if(is_empty()){
            cout<<"can not pop";
            return;
        }
        arr[front] = -1;
        if(front == (size -1)){
            front = 0;
        }
        else{
            front++;
        }
    }

    int front_ele(){
        return arr[front];
    }

    int back_ele(){
        return arr[rare];
    }

};

int main()
{
    Queue s(3);
    s.push_ele(4);
    s.push_ele(5);
    s.push_ele(6);
    s.pop_ele();
    s.pop_ele();
    cout<<s.front_ele();

    return 0;
}
