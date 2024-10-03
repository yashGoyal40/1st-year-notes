#include<iostream>
#include<vector>
using namespace std;
class Stack{
    public:
    int top=-1;
    int* arr;
    int size;
    bool full(){
        if(top==size-1){
            return true;
        }
        else return false;
    }
    bool empty(){
        if(top == -1){
            return true;
        }
        else return false;
    }
    void push(int data){
        if(!full()){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"overflow"<<endl;
        }

    }
    void pop(){
        if(!empty()){
            top--;
        }
        else{
            cout<<"underflow"<<endl;
        }

    }
    void  peek(){
        if(!empty())
        cout<<"top is:"<<arr[top];
        else{
            cout<<"stack is empty"<<endl;
        }
    }
};
int main(){
    Stack s;
    s.size = 10;
    s.peek();
    

    return 0;
}