#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int d):data(d),left(NULL),right(NULL){}
};

Node* insertIntoBST(int val,Node* root){
    if(root == NULL){
        root = new Node(val);
        return root;
    }
    if(val < root->data){
        root->left =  insertIntoBST(val,root->left);
    }
    else{
        root->right =  insertIntoBST(val,root->right);
    }

    return root;
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);
}
void postorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<" ";
}

bool check(Node* root , int val){
    if(root == NULL){
        return false;
    }
    if(root->data == val){
        return true;
    }
    if(val > root->data){
        check(root->right,val);
    }
    else{
        check(root->left,val);
    }
}

int minVal(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp->data;
}
int mmaxVal(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp->data;
}

int inorderPredenceder(Node* root){
    if(root->left == NULL){
        return root->data;
    }

    return mmaxVal(root->left);

}

int inorderSuccessor(Node* root){
    if(root->right == NULL){
        return root->data;
    }
    return minVal(root->right);
}

void coutnChildNodes(Node* root,int &count){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        count++;
    }
    coutnChildNodes(root->left,count);
    coutnChildNodes(root->right,count);
}

int heightOfTree(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftlen = heightOfTree(root->left);
    int righttlen = heightOfTree(root->right);

    return 1+max(leftlen,righttlen);
}

int main()
{
    Node* root =NULL;
    root = insertIntoBST(10,root);
 
    return 0;
}