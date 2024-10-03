#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l = n;
    int ans = 0;
    while(l>0){
        ans = ans*10 + l%10;
        l= l/10;
    }

    cout<<ans;
    
    return 0;
}