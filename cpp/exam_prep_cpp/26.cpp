#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new(nothrow) int(100);
    if(a){
        cout<<"memory allocated"<<endl;
    }
    else{
        cout<<"not possible"<<endl;
    }

    try{
        // throw runtime_error("this is an error given by me");
        throw out_of_range("this is out of range ");
    }
    catch(exception &e){
        cout<<e.what();

    }


    return 0;
}