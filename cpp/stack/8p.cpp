#include<iostream>
#include<stack>
#include<string>
using namespace std;

int eval(char i,int op1,int op2){
    if(i == '+'){
        return op2+op1;
    }
    if( i == '-'){
        return op2 - op1;
    }
    if(i == '/'){
        return op2 / op1;
    }
    if(i =='*'){
        return op2*op1;
    }
    return -1;
}

int main(){
    string s = "+-345";

    stack<int>stk1;
    stack<char>stk2;

    for(char i:s){
        if(isdigit(i)){
            stk1.push(i  - '0');
            if(stk1.size() == 2){
                int a = stk1.top();
                stk1.pop();
                int b = stk1.top();
                stk1.pop();
                char m = stk2.top();
                stk2.pop();
                int c = eval(m,a,b);
                stk1.push(c);
            }
        }

        else{
            stk2.push(i);
        }
    }

    cout<<stk1.top();

}