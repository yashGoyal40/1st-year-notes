#include<iostream>

using namespace std;
int main(){
    int i=0,j=0;
    while(i<5){
        while(j<5){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
        j=0;
    }
    return 0;
}