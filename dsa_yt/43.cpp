#include<iostream>
using namespace std;
int print_array(int a[],int b){
    for(int i=0;i<=b;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
int main(){
    int a[11]={23,4,3,87,87,12,9,0,12,5,56};
    for(int j=0;j<=9;j++){
        for(int i=0;i<=9;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    print_array(a,10);
    return 0;
}