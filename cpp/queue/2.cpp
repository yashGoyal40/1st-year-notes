#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    Node(int d) : data(d),next(NULL){}
};

class Queue{
    private:
    Node *frontNode;
    public:

    Queue() : frontNode(NULL){}

    bool isempty(){
        if(frontNode == NULL){
            return 1;
        }
        else{
            return 0;
        }
    }

    void push_ele(int n){
        Node* newNode = new Node(n);

        if(isempty()){
            frontNode   = newNode;
            return;
        }
        else{
            frontNode->next = newNode;
        }
    }

    void pop_ele(){
        if(isempty()){
            throw runtime_error("underflow");
        }
        else{
            Node *temp = frontNode;
            frontNode = frontNode->next;
            delete temp;
        }
    }

    int getfront(){
        if(isempty()){
            throw runtime_error("queue is empty");
        }
        else{
            return frontNode->data;
        }

    }
};


int main()
{
    Queue q;
    q.push_ele(1);
    q.push_ele(2);
    q.push_ele(3);
    q.push_ele(4);
    cout<<q.getfront();
    q.pop_ele();
    cout<<q.getfront();


 
    return 0;
}