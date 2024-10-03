#include<iostream>
using namespace std;


class stack{
    public:
    int data;
    stack* next;
     
    stack(int a):data(a),next(NULL){}
};

void push(stack* &top,int n){
    stack* temp = new stack(n);
    temp->next =  top;
    top = temp;
}

int main(){
    stack* top = new stack(10);
    push(top,12);

    return 0;
}