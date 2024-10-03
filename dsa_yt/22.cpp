#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cin >>a>>b>>c;
    //abc
    int rem=0;
    rem=(rem*10)+a;
    rem=(rem*10)+b;
    rem=(rem*10)+c;
    cout<<rem<<endl;

    int rem1=0;
    rem1 = (a*pow(10,0))+rem1;
    rem1 = (b*pow(10,1))+rem1;
    cout<<(c*pow(10,2)+rem1)<<endl;
    int l = ((c*(pow(10,2)))+rem1);
    cout<<l<<endl;
    rem1=c*(pow(10,2))+rem1;
    cout<<rem1<<endl;

    return 0;
}