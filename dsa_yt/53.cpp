#include<iostream>
using namespace std;
int alternateSol(int a[]){
    int ans = 0,ans2=0;
    for(int i=0;i<10;i++){
        ans = ans^a[i];
    }
    for(int i=1;i<=9;i++){
        ans2 ^= i;
    }
    cout<<ans<<endl<<ans2<<endl;
    cout<<(ans^ans2);
    return 0;
}
int main(){
    int a[10]={1,2,3,4,5,7,6,7,8,9};
    // for(int i=0;i<10;i++){
    //     int temp = a[i];
    //     int count = 0;
    //     for(int j=0;j<10;j++){
    //         if(temp==a[j]){
    //             count++;
    //         }
    //     }
    //     if(count>1){
    //         cout<<temp;
    //         return 0;
    //     }

    // }
    // cout<<"no element repeated"<<endl;

    alternateSol(a);
    return 0;
}