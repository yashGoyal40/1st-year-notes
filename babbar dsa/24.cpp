#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<5){
        int j=0;
        while(j<i){
            cout<<(char)(68-j);
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}