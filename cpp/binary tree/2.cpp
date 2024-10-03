#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int n):data(n),left(nullptr),right(nullptr){}
};

node* buildTree(node* root){
    int data;
    cout<<"enter the data: ";
    cin>>data;

    if(data == -1){
        return nullptr;
    }

    root = new node(data);



    cout<<"enter the data for left of "<<data<<" : "<<endl;
    root->left = buildTree(root->left);
    cout<<"enter the data for right of "<<data<<" : "<<endl;
    root->right = buildTree(root->right);

    return root;
}

int main()
{

    node* root= nullptr;

    root = buildTree(root); 
 
    return 0;
}