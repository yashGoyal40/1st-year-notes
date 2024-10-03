#include<iostream>
using namespace std;
void appearTwice(int a[],int size){
    int b=0;
    for(int i=0;i<size;i++){
        b=b^a[i];
    }
    for(int i=1;i<size-1;i++){
        b=b^i;
    }
    for(int i=1;i<8;i++){
        for(int j=1;j<8;j++){
            if((i^j) == b){
                cout<<i<<' '<<j<<endl;
            }
        }
    }
    
}
int main(){
    int arr[10] = {4,2,7,3,8,2,3,1,5,6};
    appearTwice(arr,10);
    return 0;
}