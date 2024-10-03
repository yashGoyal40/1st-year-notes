#include<iostream>
#include<string>
using namespace std;

void reverse(string& str,int st,int end){
    if(st>end){
        return;
    }

    char temp = str[st];
    str[st] = str[end];
    str[end] = temp;

    reverse(str,st+1,end-1); 
}
int main(){
    string str;
    cout<<"enter a string: ";
    cin>>str;
    // reverse(str.begin(),str.end());
    reverse(str,0,str.size()-1);
    cout<<str;


}