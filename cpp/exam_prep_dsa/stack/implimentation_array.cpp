#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int top = -1;
    int * arr;
    int size;

    bool full(){
        if(top == size -1){
            return 1;
        }
        return 0;
    }
    bool empty(){
        return (top==-1);
    }
    void push(int data){
        if(!full()){
            top++;
            arr[top] = data;
        }
        else{
            cout<<"overflow";
        }
    }
    void pop{
        if(!empty()){
            top--;
        }
        else{
            cout<<"underflow";
        }
    }

    void peek(){
        if(!empty())
        cout<<arr[top];
    }
}
int main()
{
    
    return 0;
}