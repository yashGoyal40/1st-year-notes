#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character: ";
    cin>>ch;
    if(ch >='a' && ch >='z'){
        cout<<"small but alphabatic";
    }
    else if(ch <= 'A' && ch >= 'Z'){
        cout<<"capital but alphabatic";
    }
    else if(ch <= 0 && ch >= 9){
        cout<<"numeric";
    }
    else{
        cout<<"enter in valid range";
    }
    

    return 0;
}