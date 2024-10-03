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
    cout<<"enter the data: ";
    int data;
    cin>>data;

    if(data == -1){
        return nullptr;
    }
    
    root = new node(data);

    cout<<"enter the value of left of "<<data<<" : ";
    root->left = buildTree(root->left);

    cout<<"enter the value of right of "<<data<<" : ";
    root->right = buildTree(root->right);

    return root;
}


void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == nullptr){
            cout<<endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(root->left){
                q.push(root->left);
            }

            if(root->right){
                q.push(root->right);
            }
        }
    }
}


void reverseLavelOrderTraversal(node* root){
    queue<node*> q;
    stack<node*> stk;

    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
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
        node* temp = stk.top();
        stk.pop();
        cout<<temp->data<<" ";
    }
    cout<<endl;

}

void inOrderTraversal(node* root){
    if(root == nullptr){
        return;
    }

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);

}
void preOrderTraversal(node* root){
    if(root == nullptr){
        return;
    }

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}
void postOrderTraversal(node* root){
    if(root == nullptr){
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";

}

node* buildTreeFromLevelOrder(node* root){
    queue<node*>q;
    cout<<"enter a data for root: ";
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"enter left node for "<<temp->data<<" : ";
        int leftNode;
        cin>>leftNode;

        if(leftNode != -1){
            temp->left = new node(leftNode);
            q.push(temp->left);
        }
        cout<<"enter left right for "<<temp->data<<" : ";
        int rightNode;
        cin>>rightNode;

        if(rightNode != -1){
            temp->right = new node(rightNode);
            q.push(temp->right);
        }
    }
    return root;
}

int main()
{
    node* root = nullptr;
    root = buildTreeFromLevelOrder(root);
    reverseLavelOrderTraversal(root);
 
    return 0;
}