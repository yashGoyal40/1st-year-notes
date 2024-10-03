#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int n):data(n),left(nullptr),right(nullptr){}

};

node* inserInTree(node* root,int data){
    root = new node(data);

    return root;
}

int rectr(node* root,int counts){
    if(root == nullptr){
        return counts;
    }

    if((root->left == nullptr)  && (root->left == nullptr)){
        return counts+1;
    }

    else{
        counts = rectr(root->left,counts);
        counts = rectr(root->right,counts);
        return counts;
    }

}

void preOrderTraversal(node* root,int &counts){
    if(root == nullptr){
        return;
    }

    // cout<<root->data<<" ";
    if((root->left == nullptr)  && (root->right == nullptr)){
        counts++;
    }
    
    preOrderTraversal(root->left,counts);
    preOrderTraversal(root->right,counts);

}


void countLeafsTraversal(node* root){
    int counts=0;
    // int c=rectr(root,counts);
    preOrderTraversal(root,counts);
    cout<<counts;
    // cout<<c;
    

}

int heightOfTree(node* root){
    if(root == nullptr){
        return 0;
    }

    int heifhtleft = heightOfTree(root->left);
    int heightright = heightOfTree(root->right);

    return max(heifhtleft,heightright) + 1;

}

int main()
{
    node* root = new node(20);
    root->left = inserInTree(root->left,10); 
    root->right = inserInTree(root->right,35); 
    root->left->left = inserInTree(root->left->left,5); 
    root->left->right = inserInTree(root->left->right,15); 
    root->left->right->left = inserInTree(root->left->right->left,13); 
    root->right->left = inserInTree(root->right->left,30); 
    root->right->right = inserInTree(root->right->right,42);
   
    countLeafsTraversal(root);

    cout<<endl<<heightOfTree(root);


    return 0;
}