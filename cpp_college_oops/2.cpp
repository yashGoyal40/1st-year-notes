#include<iostream>
using namespace std;
//manipulation function
//without argument eg: endl

//with arguments eg: 
//setw(n number of blank spaces)
//setfill: fill blank spaces with character specified
//setprecision : specifies precision
#include<iomanip>
int main(){
    int a;
    int b;
    cin>>a>>b;
    cout<<a<<" "<<b;
    cout<<a<<endl<<b<<endl;
    double c = 4.2323232323;
    cout<<setfill('*')<<setw(10)<<"hello"<<endl;

    cout<<setprecision(2)<<c<<endl; 
    cout<<fixed<<setprecision(2)<<c; 
    return 0;
}