#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int n;
    cin>>n;
    cout<<n;
    float b;
    cin>>b;

    cout<<setprecision(2)<<fixed<<b;

    cout<<endl<<sizeof(b);


    return 0;
}