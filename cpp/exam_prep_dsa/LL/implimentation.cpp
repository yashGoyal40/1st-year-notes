#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    Node(int data):data(data) {}
};

void insert_at_head(Node* &head,int d){
    Node* temp = new Node(d);
    if(head == nullptr){
        head = temp;
        return ;
    }
    temp->next = head;
    head = temp;

}

void print(Node* &head){

    Node* temp = head;
    while(temp!= nullptr){
        cout<<temp->data;
        temp = temp->next;
    }
   
    
}

void insert_at_bottom(Node* &head,int val){

    Node* temp = head;
    if(temp == nullptr){
        head = new Node(val);
        return;
    }
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return;


    
}

void insert_at_pos(Node* &head,int val,int pos){

    if(pos == 0){
        Node* tmp = new Node(val);
        tmp->next = head;
        head = tmp;
    }

    if(head == nullptr){
        cout<<"out of range";
        return;
    }

    Node* temp = head;
    for(int i=0;i<pos && temp != nullptr;i++){
        temp = temp->next;
    }

    if(temp == nullptr){
        cout<<"out of range";
        return;
    }
    Node* newNode = new Node(val);

    newNode->next = temp->next;
    temp->next = newNode;
}

bool search(Node* &head,int data){
    
}


void delete_data(Node* &head,int data){
    
    Node* temp = head;
    while(temp->next->data != data || temp->next != nullptr){
        temp = temp->next;
    }

    if(temp->next == nullptr){
        cout<<"element not found";
        return;
    }
    else{
        temp->next = temp->next->next;
    }

   
}


void delete_at_pos(Node* &head,int pos){
   

    

}


int main()
{
    Node* head = nullptr;
    insert_at_head(head,10);
 
    return 0;
}