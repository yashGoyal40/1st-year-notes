#include<bits/stdc++.h>
using namespace std;

int main()
{
    try{
        throw "hello";
    }
    catch(string e){
        cout<<"there is an eror";
        throw;

    }
    return 0;
}