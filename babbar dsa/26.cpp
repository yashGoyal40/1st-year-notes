#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<5){
        int j=0;
        while(j<5-i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}