#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<5){
        int j=0;
        while(j<i){
            cout<<i-j;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}