#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=5){
        int j=5;
        while(j>=i){
            cout<<6-j<<" ";
            j--;
        }
        int k=1;
        while(k<i){
            cout<<"* ";
            k++;
        }
        int l=1;
        while(l<i){
            cout<<"* ";
            l++;
        }
        int m=5;
        while(m>=i){
            cout<<m-i+1<<" ";
            m--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}