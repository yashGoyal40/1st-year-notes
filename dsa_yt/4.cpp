#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number ";
    cin>>a;
    if(a>5)cout<<"its greater than 5"<<endl;
    else cout<<"is less than 5"<<endl;
    a>5 ? cout<<"its greater than 5" : cout<<"is less than 5";
    int b,c;
    cout<<endl;
    cin>>b>>c;
    cout<<"multiple outputs given"<<endl;
    // ' ' , '\n' , '\t'
    int m=97;
    m=cin.get();
    cout << endl<<m;
    //takes character
    bool am = (1<3);
    cout<<endl<<am; 
    return 0;
}