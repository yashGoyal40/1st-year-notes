#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[]={10,12,13,14};
    for(int ele:arr){
        sum += ele;
    }
    cout<<sum;
    return 0;
}