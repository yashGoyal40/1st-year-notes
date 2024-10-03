#include<iostream>
using namespace std;
int main(){\
    int a=1,sum=0;
    while(a<=10){
        if(a%2==0)
        sum+=a;
        a++;
    }
    cout<<sum;
    return 0;
}