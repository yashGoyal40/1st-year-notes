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

    root  = new node(data);

    cout<<"enter the left of "<<data<<" : ";
    root->left  = buildTree(root->left);
    cout<<"enter the right of "<<data<<" : ";
    root->right  = buildTree(root->right);
    return root;
}


void levelOrderTraversel(node* root){
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
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}


void reverseLevelOrderTraversal(node* root){
    stack<node*> stk;
    queue<node*> q;

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
        cout<< temp->data<<" ";
        stk.pop();
    }
    cout<<endl;
}

void inOrderTraversal(node* root){
    // LNR
    if(root == nullptr){
        return ;
    }

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);

}

void preOrderTraversal(node* root){
    //NLR
    
    if(root == nullptr){
        return ;
    }

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);


}
void postOrderTraversal(node* root){
    //LRN

    if(root == nullptr){
        return ;
    }


    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}



int main()
{
    node* root = nullptr;

    root = buildTree(root);
    // levelOrderTraversel(root);
    // reverseLevelOrderTraversal(root);
    // inOrderTraversal(root);
    // postOrderTraversal(root);
    preOrderTraversal(root);


 
    return 0;
}