#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter the value: ";
    cin >>a;
    cout <<"the entered value is : "<<a;
    char b ;
    cin.ignore();
    cin.get(b);
    cout <<"the entered value is : "<<b<<endl;
    cout << 0||1;

    return 0;
}