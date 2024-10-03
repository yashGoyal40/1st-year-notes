#include<iostream>
#include<string>
using namespace std;

void revers(string &a,int i,int j){

    if(i>=j){
        return;
    }

    char temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    return revers(a,i+1,j-1);
}

int main(){
    string a;
    cin>>a;
    int i=0,j = a.size()-1;
    string b = a;

    revers(a,i,j);
    cout<<a<<endl;
    if(a==b){
        cout<<"This is palindrome";
    }
    // revese(a.begin(),a.end());
    
    return 0;
}