#include<iostream>
using namespace std;
int main(){
    int i=0;
    int count=1;
    while(i<3){
        int j=0;
        while(j<3){
            cout<<count<<" ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }

    return 0;
}