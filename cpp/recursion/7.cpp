#include<iostream>
#include<string>
using namespace std;

string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void getvalue(int b){
    if(b<=0){
        return;
    }

    getvalue(b/10);
    cout<<arr[(b%10)]<<endl;
}

int main(){


    int b;
    cin>>b;
    getvalue(b);
    return 0;
}