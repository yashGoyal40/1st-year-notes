//find total number of Accourence 
#include<iostream>
#include<vector>
using namespace std;
int totalAccourece(vector<int>arr,int k,int n){
    int ans=0;
    int st=0,end=n-1;
    int mid = st + (end-st)/2;
    while(end>=st){
        if(arr[mid]==k){
            int hi=mid,lo=mid;
            while(hi<n && arr[hi]==k){
                hi++;
                ans++;
            }
            while(lo>=0 && arr[lo]==k){
                lo--;
                ans++;
            }
            return ans-1;
        }
        else if(arr[mid]>k){
            end = mid-1;
        }
        else{
            st = mid+1;
        }
        mid = st + (end-st)/2;
    }
    return ans;
}
int main(){
    vector<int>arr = {1,2,3,4,5,5,5,5,5,5,5,5,5,5,5,6,7,8,9};
    int k=5,n=19;
    int ans = totalAccourece(arr,k,n);
    cout<<ans;
    return 0;
}