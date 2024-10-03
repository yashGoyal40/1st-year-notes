#include<iostream>
using namespace std;
bool search(int arr[],int len,int key){
    for(int i=0;i<len;i++){
        if(arr[i]==key) return true;
    }
    return false;
}
int main(){
    int a[11]={23,4,3,87,87,12,9,0,12,5,56};
    cout<<search(a,11,9);
    return 0;
}