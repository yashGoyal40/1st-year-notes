#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int n):data(n),next(NULL){}
};

class Stack{
    private: 
    Node* top;
    public:
    Stack() : top(NULL) {}

    void push(int n){
        Node* newNode = new Node(n);
        newNode->next = top;
        top = newNode;
    }
    bool empty(){
        if(top == NULL){
            return true;
        }
        else return false;
    }
    void pop(){
        if(empty()){
            cout<<"stack underflow"<<endl;
            return;
        }

        Node* temp = top;
        top = top->next;
        delete temp;
    }
    int peek(){
        if(empty()){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }
};

int main(){
    Stack s;
    s.pop();
    s.push(10);    
    s.push(12); 
    cout<<"peek element is "<<s.peek()<<endl;
    s.pop();
    cout<<"peek element is "<<s.peek()<<endl;
    s.pop();
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }

    return 0;
}