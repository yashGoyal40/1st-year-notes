#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=5){
        int k=5;
        while(k>i){
            cout<<" ";
            k--;
        }
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        int l=1;
        while(l<i){
            cout<<i-l;
            l++;
        }
        cout<<endl;
        i++;
    }
}