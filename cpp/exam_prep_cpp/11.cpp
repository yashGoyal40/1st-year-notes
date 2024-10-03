//pointers

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a =5;
    int *b = &a;

    cout<<*b<<endl;
    cout<<b<<endl;
    
    int* *c = &b;
    cout<<*c;
    cout<<endl<<**c;

    
    return 0;
}