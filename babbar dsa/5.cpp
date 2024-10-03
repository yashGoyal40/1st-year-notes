#include<iostream>

using namespace std;
int main(){
    int a,i=0;
    cout<<"enter a range: ";
    cin>>a;
    while(i<=a){
        i++;
        if(i==5){
            continue;
        }
        cout<<i<<endl;
        
    }
    return 0;
}