#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the age: ";
    cin>>a;
    if(a>18){
        cout<<endl<<"you are allowed";
    }
    else if (a==18){
        cout <<endl<<"wait for just 1 year";
    }
    else{
        cout<<endl<<"you are not allowed";
    }
    return 0;
}