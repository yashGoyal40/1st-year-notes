#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int>v={2,4,5,7,1,10,6};
    for(int j=v.size()-1;j>0;j--){
    for(int i=0;i<j;i++){
        if(v[i]>v[i+1]){
            int temp = v[i];
            v[i]=v[i+1];
            v[i+1]=temp;
        }
    }}
    for(int k=0;k<v.size();k++){
        cout<<v[k]<<endl;
    }
    return 0;
}