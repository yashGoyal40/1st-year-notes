//solve infix expression through stack 
#include<bits/stdc++.h>
using namespace std;

int precedence(char i){
    if(i == '+'  || i == '-'){
        return 1;
    }
    if(i == '*'  || i == '/'){
        return 2;
    }
    else{
        throw runtime_error("use valid operator");
    }

}

int eval(int a,int b,char i){
    switch(i){
        case '+':
            return a+b;
            break;
        case '-':
            return a-b;
            break;
        case '*':
            return a*b;
            break;
        case '/':
            return a/b;
            break;
        default: 
            throw runtime_error("wrong operator");
    }
}

int main()
{
    string a = "4*3+4-2";

    stack<int> si;
    int flag = 0;
    stack<char> sc;

    for(char i : a){
        if(isdigit(i)){
            si.push(i-'0');
        }
        else{
            int flag1 = precedence(i);
            if(flag1>=flag){
                flag = flag1;
                sc.push(i);
            }
            else{
                int a = si.top();
                si.pop();
                int b = si.top();
                si.pop();
                char ii = sc.top();
                sc.pop();
                int c = eval(a,b,ii);
                si.push(c);
                sc.push(i);
            }
        }
    }

    while(!sc.empty()){
        int a = si.top();
        si.pop();
        int b = si.top();
        si.pop();
        char i = sc.top();
        sc.pop();
        int c = eval(a,b,i);
        si.push(c);
    }

    cout<<si.top();

    // cout<<isdigit(a[1]);

    // cout<<a[0]-'0';

    return 0;
}