#include<iostream>
using namespace std;
int ff(int a[],int len){
    for(int i=0;i<len;i++){
        int temp=a[i];
        int count=0;
        for(int j=0;j<len;j++){
            if(temp==a[j]){
                count++;
            }
        }
        cout<<temp<<" accours "<<count<<" times"<<endl;
    }
    return 1;
}
int main(){
    int a[5]={2,3,4,3,1};
     ff(a,5);
 
    return 0;
}