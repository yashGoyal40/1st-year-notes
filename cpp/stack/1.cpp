#include<iostream>
#include<stack>
using namespace std;
int main(){
    //LIFO
    //PUSH
    //POP
    //PEEK   [element at the top / element to be poped]
    //empty
    stack<int> s;
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    // s.push(2);
    cout<<s.empty()<<endl;  //will print 0 if false 
    //if stack is not empty it will print 0
    //if stack is empty it will print 1
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    cout<<"size of stack is: "<<s.size()<<endl;
    return 0;
}