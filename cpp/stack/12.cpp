// convert infix to postfix
#include<bits/stdc++.h>
using namespace std;

int precendece(char i){
    if(i == '+' || i == '-'){
        return 1;
    }
    else if(i == '/' || i == '*'){
        return 2;
    }
    else{ 
        return 0;
    }
}


int main()
{   
    string s="(a+b)*c - l";
    stack<char> stk;

    for(char i: s){
        if(i == '('){
            stk.push(i);
        }
        else if(i == ')'){
            while(stk.top() != '('){
                cout<<stk.top();
                stk.pop();
            }
            stk.pop();  // pops '(' 
        } 
        else if(i == '+'||i == '-' || i == '*' || i == '/'){
            if(stk.empty()){
                stk.push(i);
            }
            else if(precendece(i)> precendece(stk.top())){
                stk.push(i);
            }
            else{
                while(!stk.empty() && precendece(i) <= precendece(stk.top())){
                    cout<<stk.top();
                    stk.pop();
                }
                stk.push(i);
            }

        }
        else{
            cout<<i;
        }
    }

    while(!stk.empty()){
        cout<<stk.top();
        stk.pop();
    }

    
    return 0;
}