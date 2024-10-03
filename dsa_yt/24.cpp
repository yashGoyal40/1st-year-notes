#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    float sum=0;
    int i=0;
    while(a!=0){
        int rem=a%10;
        if(rem==1){
            sum=(sum+ pow(2,i));
        }
        a=a/10;
        i++;
    }
    cout<<sum;
    return 0;
}