#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int main(){
    vector<int> v={1,3,4,5,6};
    int sum = accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    return 0;
    //insertion in an array : O(n)
    //traversal in array : O(n)
    //deletion in array : O(n)
    //sorting in array : O(nlog(n))
    //reversal : O(n)
    /*
    1 constant 
    n linear
    log(n) logorithmic 
    nlog(n) linear lograthmic
    n^2 quadratic 
    n^3 cubic 
    2^n exponential
    n! factorial
    */

}