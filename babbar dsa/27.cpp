#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<5){
        int j=0;
        while(j<i-1){
            cout<<" ";
            j++;
        }
        int k=0;
        while(k<5-i){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
}