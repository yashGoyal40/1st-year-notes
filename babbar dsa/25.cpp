#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<5){
        int j=0;
        while(j<4-i){
            cout<<" ";
            j++;
        }
        int k=0;
        while(k<i){
            cout<<"*";
            k++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}