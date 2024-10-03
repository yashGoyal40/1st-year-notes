#include <bits/stdc++.h>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
  pair<int, int> ans = {-1, -1};
  int lo = 0, hi = n - 1;
  int mid = lo + (hi - lo) / 2;
  while (lo <= hi) {
    if (arr[mid] == k) {
      int f=mid,l=mid;
      while(f>=0 && arr[f]==k){
      f--;
      }
      ans.first = f+1;

      while (l < n && arr[l] == k){
        l++;
      }
      ans.second = l - 1;
      break;
    } else if (arr[mid] > k) {
      hi = mid - 1;
    } else {
      lo = mid + 1;
    }
    mid = lo + (hi - lo) / 2;
  }
  return ans;
}

int main(){
    vector<int>arr={1,2,3,4,5,5,5,5,6,7,8,9};
    int k=5,n=12;
    pair<int,int>p = firstAndLastPosition(arr,n,k);
    cout<<p.first<<endl<<p.second;

}




