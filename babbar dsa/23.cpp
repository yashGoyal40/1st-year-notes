#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<5){
        int j=0;
        while(j<i){
            cout<<(char)(i+j+64);
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}