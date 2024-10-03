#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int n):data(n){}
};

class stack{
    private;
    Node* top;
    public: 
    stack() : top(null){}

    void push(int n){
        Node* newNode = new Node(n);
        newNode->next = top;
        top = newNode;
    }   

    bool empty(){
        if(top == nullptr){
            return 1;
        }
        return 0;
    }

    void pop(){
        top = top->next;
    }

    int  peek(){
        return top->data;
    }


};

int main()
{
    
    return 0;
}