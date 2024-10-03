#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d):data(d),next(nullptr){}
};

void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != nullptr ){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cout<<"element: ";
        cin>>v[i];
    }

    Node* head = NULL;

    for(int i=0;i<n;i++){
        insertAtHead(head,v[i]);
    }

    print(head);

    return 0;
}