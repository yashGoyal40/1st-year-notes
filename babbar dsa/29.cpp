#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<5){
        int j=0;
        while(j<5-i){
            cout<<" ";
            j++;
        }
        int k=0;
        while(k<i){
            cout<<k+1;
            k++;
        }
        int l=0;
        while(l<i-1){
            cout<<i-l-1;
            l++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}