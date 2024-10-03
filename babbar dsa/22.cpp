#include<iostream>
using namespace std;
int main(){
    int i=1,count=0;
    while(i<5){
        int j=0;
        while(j<i){
            cout<<(char)(count+65);
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}