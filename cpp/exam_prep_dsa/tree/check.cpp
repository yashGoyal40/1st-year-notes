#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data): data(data),left(nullptr),right(nullptr){}
};

node* insert_into_bst(node* &root,int a){
    if(root == nullptr){
        node* newnode = new node(a);
        root= newnode;
        return root;
    }

    if(a < root->data){
        root->left = insert_into_bst(root->left,a);
    }
    else{
        root->right = insert_into_bst(root->right,a);
    }

    return root;
}

void inorder(node* &root){

    if(root == nullptr){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


void count_leaf_node(node* & root,int &count){
    if(root == nullptr){
        return;
    }

    count_leaf_node(root->left,count);

    if(root->left == nullptr && root->right == nullptr){
        count++;
    }
    
    count_leaf_node(root->right,count);
}


bool check(node* &root,int val){
    if(root == nullptr){
        return 0;
    }
    if(root->data == val){
        return 1;
    }

    if(val < root->data){
        chech(root->left);
    }
    else{
        check(root->right);
    }
}


int height(node*& root){

    if(root == nullptr){
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    return max(right,left)+1;
}

int max_val(node* root){
    while(root->right != nullptr){
        root = root->right;
    }
    return root->data;
}

int min_val(node* root){
    while(root->left != nullptr){
        root = root->left;
    }
    return root->data;
}

int inordersucessor(node* root){
    if(root->right == nullptr){
        return root->data;
    }
    return min_val(root->right);
}
int inorderpredecesor(node* root){
    if(root->left == nullptr){
        return root->data;
    }
    return max_val(root->right);
}

int minval(node * root){
    if(root -> left == NULL){
        return root-> data;
    }

    minval(root -> left);
}

node * deletefromBST(node * root, int element){

    if(root == NULL){
        return root;
    }

    if(root -> data == element){
        if(root -> left == NULL and root -> right == NULL){
            delete root;
            return NULL;
        }
        if(root -> left != NULL and root -> right == NULL){
            Node * temp = root -> left;
            delete root;
            return temp;
        }
        if(root -> left == NULL and root -> right != NULL){
            Node * temp = root -> right;
            delete root;
            return temp;
        }

        if(root -> right != NULL and root ->left != NULL){
            int min = minval(root -> right);
            root ->data = min;
            root -> right = deletefromBST(root -> right, mini);
            return root;
        }
    }

    if(element > root->data){
        root -> right = deletefromBST(root -> right , element);
        return root;
    }
    else{
        root -> left = deletefromBST(root -> left, element);
        return root;
    }
}


int main()
{
    node* root = nullptr;
    root = insert_into_bst(root,10);
    root = insert_into_bst(root,8);
    root = insert_into_bst(root,11);
    int count = 0;
    count_leaf_node(root,count);
    cout<<count;

    
    return 0;
}