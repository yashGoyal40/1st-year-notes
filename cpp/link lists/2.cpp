//singly 
//Implimentation

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next; 

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){

    }
};

int main(){
    Node * node1 = new Node(10);
    Node * node2 = new Node(12);
    node1->next=node2;

    cout<<"node1 data: "<<node1->data<<endl;
    cout<<"node1 data: "<<node1->next->data;




    delete node1;
    delete node2;


    return 0;
}