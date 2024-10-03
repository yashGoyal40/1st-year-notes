#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    vector<int> v;
    vector<int> v1;
    vector<int> v2;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++){
        int count=1,k=i;
        v1.push_back(v[i]);
        for(int j=i+1;j<n;j++){
            if(v[i]==v[j]){
                count++;
                k++;
            }
        }
        i=k;
        v2.push_back(count);
    }
    int j=v1.size();
    for(int i=0;i<j;i++){
        cout<<v1[i]<<" "<<v2[i]<<endl;
    }
}