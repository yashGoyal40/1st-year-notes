#include<iostream>
using namespace std;
int main(){
    char i=1,j=1;
    while(i<6){
        while(j<=i){
            cout<<(char)('A'+j-1)<<" ";
            j++;
        }
        j=1;
        i++;
        cout<<endl;
    }
    return 0;
}

