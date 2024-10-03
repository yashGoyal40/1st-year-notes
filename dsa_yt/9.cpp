#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter a digit: ";
    cin>>a;
    if(a>='0'&&a<='9')cout<<"this is numaric";
    else if(a>='A'&&a<='Z')cout<<"this is capital";
    else if(a>='a'&&a<='z')cout<<"this is small";
    else cout<<"this is not in domain";

    return 0;
}