#include<iostream>
using namespace std;
int main(){
    int a=5,b=6;
    int sum;
    sum=a+b;
    cout<< sum;
    char c = 'a';
    cout<<endl<<c;
    //double , float , bool
    bool m= true;
    cout <<endl<< m;
    int n = 'a';
    char o = 98;
    cout << endl<<n<<endl<<o;
    char ch =123456;
    cout<<endl<< ch;
    // for positive negative number 
    // first bit will be 1 for negative and 0 for positive 
    // in this case usually 2s compliment is used 
    unsigned int l1=123;
    cout <<endl<< l1; 
    unsigned int l2=-123;
    cout <<endl<< l2; 
    return 0;
}
