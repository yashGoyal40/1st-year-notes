#include<bits/stdc++.h>
using namespace std;

struct l{
    int f;
    int l;
};

struct h{
    int b;
    int c;
    struct l d;
};
int main()
{
    struct h hello;
    hello.d.l = 1;
    cout<<sizeof(hello);
    //size of alll datatypes + padding 
    return 0;
}