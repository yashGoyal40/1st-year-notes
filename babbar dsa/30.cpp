#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<6){
        int j=0;
        while(j<6-i){
            cout<<j+1;
            j++;
        }
        int k=0;
        while(k<i-1){
            cout<<"*";
            k++;
        }
        int l=0;
        while(l<i-1){
            cout<<"*";
            l++;
        }
        int m=0;
        while(m<6-i){
            cout<<6-i-m;
            m++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}