#include<iostream>
using namespace std;
int main(){

    char temp = 'z';
    char *p = &temp;
    cout<<p<<endl; //will give garbage

    cout<<*p<<endl; //will be correct 

    char a[] = "abcasasdad";
    char * b = a;
    cout<<b+1<<endl; //will print complte string
    cout<<a<<endl;//will print complte string
    cout<<a+1;//will print complte string

    return 0;
}