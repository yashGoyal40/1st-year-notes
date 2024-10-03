#include<iostream>
using namespace std;
int main(){
    int n=9;
    while(1){
        switch(n){
            case 9:
                n=n-5;
                break;
            case 2:
                n=n-2;
                break;
            case 4:
                exit(0);
                
        }
    }
    cout<<"hello";
    return 0;
}