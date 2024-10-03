//singly link list

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int d):data(d),next(nullptr){}

};

int main(){
    Node *n1 = new Node(10);
    Node *n2 = new Node(12);
    n1->next=n2;
    Node *n3 = new Node(14);
    n2->next=n3;
    
    delete n1;
}