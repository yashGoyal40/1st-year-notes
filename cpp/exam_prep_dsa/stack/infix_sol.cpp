#include<bits/stdc++.h>
using namespace std;

int prefrence(char i){
    if(i == '+' || i == '-'){
        return 1;
    }
    if(i == '*' || i == '/'){
        return 2;
    }
    else{
        return 0;
    }
}

int main()
{
    string a = "4*5+1";
    stack<int> stk;
    stack<char>sc;

    for(char i:a){
        if(i.isdigit()){
            stk.push(i-'0');
        }
        else{
            if(i == '('){
                sc.push(i);
            }
            else if(i == ')'){
                while(sc.top() != '('){
                    
                }
            }
            else{

            }


        }
    }

    
    return 0;
}