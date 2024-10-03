#include<iostream>
using namespace std;
//default parameters 
int sum(int a=0,int b=0,int c=0,int d=0){
    return a+b+c+d;
}
int main(){
    cout<<sum(4,5);
    return 0;
}