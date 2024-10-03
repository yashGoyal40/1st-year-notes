#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d):data(d),next(nullptr){}
};

void InsertAtHead(Node* &head,int d){
    Node* tmp = new Node(d);
    tmp->next=head;
    head = tmp; 
}

void print(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}


int main(){

    Node * node1 = new Node(10);
    Node* head = node1;

    print(head);

    InsertAtHead(head,12);

    print(head);

    /*
    insert 

    Node * node2 = new Node(15);

    node2->next=head;
    head=node2;

    Node * node3 = new Node(20);
    node3->next=head;
    head=node3;

    can be done using a function 
    */

}