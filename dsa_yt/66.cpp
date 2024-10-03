#include<iostream>
#include<vector>
using namespace std;
int pivotEle(vector<int>arr){
    int lo=0,hi=arr.size()-1;
    int mid=lo+(hi-lo)/2;
    while(lo<hi){
        if(arr[mid]>=arr[0]){
            lo = mid+1;
        }
        else{
            hi=mid;
        }
        mid=lo+(hi-lo)/2;
    }
    return arr[lo];
}
int main(){
    vector<int>arr={1,2,3};

    int ans =pivotEle(arr);
    cout<<ans;
    return 0;
}