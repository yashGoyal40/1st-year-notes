#include<bits/stdc++.h>
using namespace std;

union a{
    int a;
    double b;
};


enum status{
    //provide name to values
    ok,
    error
};



int main()
{
    a b;
    b.a=10;
    b.b=12.33;
    cout<<sizeof(b);
    cout<<b.a;  // will give garbage value because its size is limi9ted to maximum sizesed datatype and it over-writes data on that 
    return 0;
}