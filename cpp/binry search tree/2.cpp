#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int n):data(n),left(nullptr),right(nullptr){}
};

node* insertintoBST(node* root,int data){
    if(root == nullptr){
        node* temp = new node(data);
        root = temp;
        return root;
    }
    if(data < root->data){
        root->left = insertintoBST(root->left,data);
    }
    else{

        root->right = insertintoBST(root->right,data);
    }

    return root;

}

bool check(node* root,int data){

    if(root == nullptr){
        return false;
    }

    if(root->data == data){
        return true;
    }
    if(root->data > data){
        return check(root->left,data);
    }
    else{
        return check(root->right,data);
    }
}

int minVal(node* root){
    node* temp = root;
    while(temp->left == nullptr){
        temp= temp->left;
    }
    return temp->data;
}

int maxVal(node* root){
    node* temp = root;
    while(temp->right == nullptr){
        temp= temp->right;
    }
    return temp->data; 
}

int inorderpredesor(node* root){
    if(root->left == nullptr){
        return root->data;
    }
    return maxVal(root->left);
}

int inordersuccessor(node* root){
    if(root->right == nullptr){
        return root->data;
    }
    return minVal(root->right);
}


node* deletion(node* root,int val){
    if(root == nullptr){
        return nullptr;
    }
    if(root->data == val){
        //0 child

        if(root->left == nullptr && root->right == nullptr){
            delete root;
            return nullptr;
        }
        //1 child
        if(root->left == nullptr && root->right != nullptr){
            node* temp = root->right;
            delete root;
            return temp;

        }
        if(root->left != nullptr && root->right == nullptr){
            node* temp = root->left;
            delete root;
            return temp;
        }
        //2 child
        if(root->left != nullptr && root->right != nullptr){
            int data = maxVal(root->left);
            root->data = data;

            node* temp =root->right;
            while(temp->right != nullptr){
                temp = temp->right;
            }

            delete temp;
            return root;
        }
    }
    else{
        if(root->data < val){
            root->right = deletion(root->right,val);
        }
        else{
            root->left = deletion(root->left,val);
        }
    }
}

int main()
{
    node* root = nullptr;

    int data ;
    cin>>data;
    while(data != -1){
        root = insertintoBST(root,data);
        cin>>data;
    }
 
    return 0;
}