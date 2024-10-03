#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int n):data(n),left(nullptr),right(nullptr){}

};

Node* insertintoBST(Node* root,int data){
    if(root == nullptr){
        root = new Node(data);
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

void insertData(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root = insertintoBST(root,data);
        cin>>data;
    }
}

void levelorder(Node* root){
    queue<Node*>q;

    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        Node* temp = q.front();
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

bool check(Node* root,int data){
    if(root == nullptr) return false;
    if(root->data == data){
        return true;
    }
    else if(root->data > data){
        return check(root->left , data);
    }
    else{
        return check(root->right,data);
    }
}

int minVal(Node* root){
    Node* temp = root;
    while(temp->left != nullptr){
        temp = temp->left;
    }
    return temp->data;
}

int maxVal(Node* root){
    Node* temp = root;
    while(temp->right != nullptr){
        temp =temp->right;
    }
    return temp->data;
}


//deletion

Node* deletion(Node* root,int val){
    if(root == nullptr){
        return root;
    }
    if(root->data == val){
        //0 child
        if(root->left==nullptr && root->right == nullptr){
            delete root;
            return nullptr;
        }
        //1 child 

        //left child
        if(root->left != nullptr && root->right == nullptr){
            Node* temp = root->left;
            delete root;
            return temp;
        }


        //right child
        if(root->right != nullptr && root->left == nullptr){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->right != nullptr && root->left != nullptr){
            int mini = minVal(root->right);
            root->data = mini;
            root->right = deletion(root->right,mini);
            return root;

        }

    }
    else{
        if(root->data < val){
            root->left = deletion(root->right,val);
            return root;
        }
        else{
            root->left = deletion(root->left,val);
            return root;
        }
    }
}

int main()
{
    Node* root = nullptr;

    cout<<"enter data to create bst: ";
    insertData(root);

    cout<<check(root , 6);
 
    return 0;
}