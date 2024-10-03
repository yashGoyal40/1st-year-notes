#include<bits/stdc++.h>
using namespace std;

class a{
    public:
    int A;
    static int b;

    static void ca(){
        cout<<"this is a class";
    }
};

int main()
{
   
    a::b = 4;
    cout<<a::b;
 
    return 0;
}