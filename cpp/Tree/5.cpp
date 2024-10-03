// WAP to create a BST and delete a node


#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    
};

Node* create(int item){
    Node* newnode = new Node;
    newnode->data = item;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

Node* insert(Node* root, int item){
    if(root == NULL){
        return create(item);
    }

    if(item<root->data){
        root->left = insert(root->left, item);
    }

    else if(item>root->data){
        root->right = insert(root->right,item);
    }

    return root;
}

void display(Node* root){
    if(root == NULL){
        return;
    }

    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}

Node* delete1(Node* root, int item){
    if(root == NULL){
        return root;
    }

    if(item<root->data){
        root->left = delete1(root->left, item);
        return root;
    }
    else if(item>root->data){
        root->right = delete1(root->right, item);
        return root;
    }

    // Delete one child
    if(root->left == NULL){
        Node* temp = root->right;
        delete root;
        return temp;
    }
    else if(root->right = NULL){
        Node* temp = root->left;
        delete root;
        return temp;

    }

    // It has two childs
    else{
        Node* succParent = root;
        Node* succ = root->right;
        while(succ->left!=NULL){
            succParent = succ;
            succ = succ->left;
        }
    }

}

int main()
{

    Node* root = NULL;
    root = insert(root, 14);
    root = insert(root, 7);
    root = insert(root, 27);
    root = insert(root, 13);
    root = insert(root, 25);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 3);
    root = insert(root, 5);
    root = insert(root, 19);
    cout<<"BST created successfully"<<endl;
    cout<<"In-order traversal is: "<<endl;
    display(root);
    cout<<endl;

    cout<<"Enter the number you want to delete: ";
    int n;
    cin>>n;
    root = delete1(root, n);
    cout<<"The updated inorder traversal is: ";
    display(root);

     
    return 0;
}