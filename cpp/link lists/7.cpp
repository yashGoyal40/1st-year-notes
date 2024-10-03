#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int a): data(a),next(NULL){}
};

void insertAtHead(Node* &head,int a){
    Node* newNode = new Node(a);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head,int a){
    Node* newNode = new Node(a);
    if(head == NULL){
        head=newNode;
    }
    else{
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next=newNode;
    }
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void insertAtPos(Node* &head,int pos,int data){

    Node* newNode=new Node(data);
    Node* temp = head;

    for(int i=0;i<pos && temp != NULL;i++){
        temp=temp->next;
    }

    if(temp == NULL){
        cout<<"out of range"<<endl;
        return;
    }

    Node* temp1 = temp->next;

    temp->next=newNode;
    newNode->next=temp1;
}

void deleteNode(Node* &head,int pos){

    if(pos==0){
        Node* temp1 =head;
        head = head->next;
        delete temp1;
    }
    else{

    Node* temp =head;
    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    if(temp == NULL || temp->next == NULL){
        cout<<"out of range"<<endl;
        return;
    }

    temp->next = temp->next->next;
    }

}

