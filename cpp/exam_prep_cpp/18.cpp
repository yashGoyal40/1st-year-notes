#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    //implicit conversion :automatic conversions 
    //done by the compiler 

    int a =10;
    float b = a;
    cout<<b<<endl;

    //explicit conversions(typecasting) done by the user 

    float c = 3.14;
    int d = static_cast<int>(c);
    cout<<d;
    
    return 0;
}