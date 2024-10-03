#include<iostream>
using namespace std;

int factorial(int a){
    if(a < 2){
        return a;
    }
    return a * factorial(a-1);
}

int main(){
    //function call itself -> recursion

    //big problem solution depend on a small problem 
    //when we have recussive function 

    //factorial
    int a;
    cin>>a;
    int b = factorial(a);
    cout<<b;



    return 0;
}