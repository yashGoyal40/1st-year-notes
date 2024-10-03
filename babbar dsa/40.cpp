#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a negative number to convert to bianry: ";
    cin>>n;
    int n_abs = abs(n);
    int power=1,ans=0;
    while(n_abs!=0){
        int bit = (n_abs & 1);
        ans= (power*bit) + ans;
        power*=10;
        n_abs=n_abs>>1;
    }
    return 0;
}