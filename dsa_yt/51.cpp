#include<iostream>
using namespace std;
int af(int a[],int len){
    //to find the output that is not repeated we can use xor function
    // ^ function 
    // a^a = 0
    // a^ 0 = a
    int xorf=0;
    for(int i=0;i<len;i++){
        xorf = (xorf^a[i]);
    }
    return xorf;

}
int main(){
    int a[7]={2,3,4,4,3,2,13};
    int l =af(a,7);
    cout<<l;
    return 0;
}