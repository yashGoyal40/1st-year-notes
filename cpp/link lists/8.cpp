#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d):data(d),next(NULL){}
};

void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head  = temp;
}

void insertAtTail(Node* &head,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
    }
    else{
        Node* temp = head;
        while(temp->next != NULL ){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertAtPos(Node* &head,int pos,int data){
    Node* newNode = new Node(data);
    Node* temp = head;

    if(pos<0){
        cout<<"invalid position";
        return;
    }
    if(pos == 0){
        newNode->next = head;
        head= newNode;
        return;
    }
    for(int i=0;i<pos-1 && temp!=NULL;i++){
        temp = temp->next;
    }
    if(temp == NULL){
        cout<<"out of range";
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void deleteNode(Node* &head,int pos){
    if(pos == 0){
        head = head->next;
        return;
    }
    Node* temp = head;
    for(int i=0;i<pos-1 && temp != NULL ;i++){
        temp = temp ->next;
    }


    if(temp == NULL|| temp->next==NULL){
        cout<<"out of range";
        return;
    }

    temp->next = temp->next->next;

}

int main(){
    Node* head = NULL;
    return 0;
}