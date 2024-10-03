#include<iostream>
using namespace std;
int main(){
   int b=0;
   {
    int b=1;
    cout<<b<<endl;
    {
        cout<<b<<endl;
    }
   }
   cout<<b;
    return 0;
}