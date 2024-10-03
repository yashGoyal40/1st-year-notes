#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    stack<char> s;
    string str;
    cout<<"enter a string: ";
    cin>>str;
    string str2;
    for(char i:str){
        s.push(i);
    }


    while(!s.empty()){
        str2.push_back(s.top());
        s.pop();
    }
    cout<<"ans is:"<<str2<<endl;


    return 0;
}