#include<bits/stdc++.h>
using namespace std;

void reverse1(string& s,int i,int j){
    if(i>j){
        return;
    }
    swap(s[i],s[j]);
    reverse1(s,i+1,j-1);
}


void reverse(string &s){
    int i = 0;
    int j = s.size()-1;
    reverse1(s,i,j);
}


int precedence(char i){
    if(i == '+' || i == '-'){
        return 1;
    }
    else if(i == '*'  || i== '/'){
        return 2;
    }
    else{
        return 0;
    }
}

string infix_to_postfix(string s){
    string ans = "";
    stack<char> stk;
    for(char i: s){
        if( i == '('){
            stk.push(i);
        }
        else if(i == ')'){
            while(stk.top() != '('){
                ans = ans + stk.top();
                stk.pop();
            }
            stk.pop();

        }
        else if( i== '+' || i == '-' || i == '*' || i == '/'){
            if(stk.empty()){
                stk.push(i);
            }
            else if(precedence(i) > precedence(stk.top())){
                stk.push(i);
            }
            else{
                while(!stk.empty() && precedence(i) <= precedence(stk.top())){
                    ans = ans + stk.top();
                    stk.pop();
                }
                stk.push(i);

            }
        }
        else{
            ans= ans + i;
        }
    }

    while(!stk.empty()){
        ans = ans+ stk.top();
        stk.pop();
    }
    return ans;
}


string infix_to_prefix(string s){
    string l = s;
    reverse(l);
    int len = l.size();
    for(int i=0;i<len;i++){
        if(l[i] == '('){
            l[i] = ')';
        }
        else if(l[i] == ')'){
            l[i] = '(';
        }
        else{
            continue;
        }
    }
    string ans = infix_to_postfix(l);
    reverse(ans);
    return ans;

}

int main()
{
    string s;
    cout<<"enter string: ";
    cin>>s;

    cout<<"infix_to_postfix: "<<infix_to_postfix(s)<<endl;
    cout<<"infix_to_postfix: "<<infix_to_prefix(s)<<endl;

    return 0;
}