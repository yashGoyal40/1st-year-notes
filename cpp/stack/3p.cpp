#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int d):data(d),next(NULL){}

};

class stack{
    private:
    node *top;
    public:
    stack():top(NULL){}

    void push(int n){
        node* newnode = new node(n);
        newnode->next = top;
        top = newnode;
    }

    bool isempty(){
        if(top==NULL){
            return true;
        }
        else{
            return false;
        }
    }
    void pop(){
        if(isempty()){
            cout<<"underflow"<<endl;
            return;
        }
        else{
            node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    int peek(){
        if(isempty()){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return top->data;
        }
    }

};

int main()
{
    stack a;
    a.push(1);
    cout<<a.peek();
    a.pop();
    cout<<a.isempty(); 
    return 0;
}