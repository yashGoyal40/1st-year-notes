#include<iostream>
#include<vector>
using namespace std;

void vec(vector<int> &v){
    v[1]=10;
}

void arrr(int arr[]){
    arr[1]=10;

}

void a(int *arr){
    cout<<*arr<<endl;
    //given from a perticualr location
    arr++;
    *arr=50;

}
int main(){
int arr[5]={1,2,3,4,5};
vector<int> v = {1,2,3,4,5};
vec(v);
arrr(arr);

cout<<v[1]<<endl;
cout<<arr[1]<<endl;

a(arr+3);
cout<<arr[4];

vector<vector<int>> v1 ={{1},{1}};
v1[0].push_back(2);

}