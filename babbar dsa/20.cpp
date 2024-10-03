#include<iostream>
using namespace std;
int main(){
    int i=0,count=0;
    while(i<4){
        int j=0;
        while(j<4){
            cout<<(char)(count+65);
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}