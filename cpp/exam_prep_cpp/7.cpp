#include<bits/stdc++.h>
using namespace std;


//will be repaced from where its called on compile time instead of run time 
inline int hello(int s){
    return s*5;
}
int main()
{
    cout<<hello(3);

    return 0;
}