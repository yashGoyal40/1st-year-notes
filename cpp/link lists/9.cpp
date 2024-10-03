#include<bits/stdc++.h>
using namespace std;

class node{
  public:
  int data;
  node* next;
  node* pre; 

  node(int n):data(n),next(nullptr),pre(nullptr){} 
};

void insertAtHead(node* &top,int data){
    node* temp = new node(data);
    if(top == nullptr){
        top = temp;
        return;
    }

    temp->next = top;
    top->pre = temp;
    top = temp;
}

void insertAtTail(node* &top,int data){
    node* newNode = new node(data);

    if(top == nullptr){
        top = nullptr;
        return;
    }
    node* temp = top;

    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->pre = temp;
}

void print(node* top){
    while(top != nullptr){
        cout<<top->data<<" ";
        top = top->next;
    }
}

void deleteNode(node* &top,int pos){
    if(pos == 0){
        if(top){
            node* temp = top->next;
            if(temp){
                temp->pre = nullptr;
            }
        top = top->next;
        }
        else{
             cout << "List is empty, cannot delete." << endl;
        }
      return;
    }

    int pos1 = 0;
    node* temp = top;
    while(pos1 < pos && temp){
        temp = temp->next;
        pos1++;
    }
    
    if(temp->next == nullptr || temp == nullptr){
        cout<<"out of range"<<endl;
        return;
    }

    temp->next = temp->next->next;
    if(temp->next)
    temp->next->pre = temp;
}



int main()
{
    node* top = nullptr;

    insertAtHead(top,10);
    insertAtHead(top,20);
    print(top);
    return 0;
}