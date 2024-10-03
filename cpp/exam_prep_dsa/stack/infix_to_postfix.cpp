#include<bits/stdc++.h>
using namespace std;

int precedence(char i) {
    if(i == '+'  || i == '-') return 1;
    else if(i == '*' || i == '/') return 2;
    else return  0;
}


string infix_to_postfix(string s){
    stack<char> stk;
    string ans;
    for( char i: s){
        if(i == '('){
            stk.push(i);
        }
        else if(i == ')'){
            while(stk.top() != '('){
                ans+=stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else if( i == '+' ||i == '-' ||i == '*' ||i == '/'){
            if(stk.empty()){
                stk.push(i);
            }
            else if(precedence(i) > precedence(stk.top())){
                stk.push(i);
            }
            else{
                while( !stk.empty() && precedence(i) < precedence(stk.top())){
                    ans+=stk.top();
                    stk.pop();
                }
                stk.push(i);
            }
        }
        else{
            ans+=i;
        }

    }

    while(!stk.empty()){
        ans+=stk.top();
        stk.pop();
    }

    return ans;
}



string infix_to_prefix(string s){
    reverse(s.begin(),s.end());
    // cout<<s<<endl;
    for(int i = 0 ; i <s.size();i++){
        if (s[i] == '('){
            s[i] = ')';
        }
        else if(s[i] == ')'){
            s[i] = '(';
        }
    }

    // cout<<s;
    string ans  = infix_to_postfix(s);
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    string s = "(a+b)-c";

    string ans = infix_to_postfix(s);
    cout<<ans<<endl;

    ans  = infix_to_prefix(s);
    cout<<ans;


    return 0;
}