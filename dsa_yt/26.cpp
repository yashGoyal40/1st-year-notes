#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    switch(n){
        case 1:
            cout<<"1";
            break;
        case 2:
            switch(n){
                case 2:
                    cout<<"value is two";
                    break;
                default:
                    cout<<"gotcha";
                    break;
            }
            break;
        default:
            cout<<"not one or two";
            break;
    }
    
}