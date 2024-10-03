#include<iostream>
using namespace std;
int main(){
    int a,b,sum;
    cout << "give a: ";
    cin >> a;
    cout << "give b: ";
    cin>>b;
    sum=a+b;
    cout<<"the given value of sum is "<<sum<<endl<<"given size of sum is "<<sizeof(sum);
    // int/int = int
    // double/int = double
    // float/ int = float
    float c;
    c=2.4;
    cout<<endl<<c;
    return 0;
}