#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int n):data(n),left(nullptr),right(nullptr){}
};



Node* buildTreeLavelOrder(Node* root){
    queue<Node*> q;
    cout<<"enter the data for root: ";
    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"enter the data of left of "<<temp->data<<" : ";
        int leftdata;
        cin>>leftdata;
        if(leftdata != -1){
            temp->left = new Node(leftdata);
            q.push(temp->left);
        }

        cout<<"enter the data of right of "<<temp->data<<" : ";
        int rightdata;
        cin>>rightdata;
        if(rightdata != -1){
            temp->right = new Node(rightdata);
            q.push(temp->right);
        }
    }
    return root;
}





void reverseLavelOrderTraversal(Node* root){
    queue<Node*> q;
    stack<Node*>stk;

    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        stk.push(temp);

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    while(!stk.empty()){
        Node* temp = stk.top();
        stk.pop();
        cout<<temp->data<<" ";
    }
    cout<<endl;
}

int main()
{
    Node* root = nullptr;
    root = buildTreeLavelOrder(root);
    reverseLavelOrderTraversal(root);
    return 0;
}