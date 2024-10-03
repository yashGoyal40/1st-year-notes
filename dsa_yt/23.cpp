#include<iostream>
using namespace std;
int main(){
    int n,arr[32],l=0,i=0;
    cin>>n;
    int a=abs(n);
    while(a!=0){
        l=a&1;
        arr[i]=l;
        a=a>>1;
        i++;
    }

     for (int j = 0, k = i - 1; j < k; j++, k--) {
        int temp = arr[j];
        arr[j] = arr[k];
        arr[k] = temp;
    }

    for(int j=0;j<i;j++){
        if(arr[j]==0) arr[j]=1;
        else arr[j]=0;
    }

    int carry = 1;
    for (int j = i - 1; j >= 0; j--) {
        int sum = arr[j] + carry;
        arr[j] = sum % 2;
        carry = sum / 2;
    }

    for (int j = 0; j < i; j++) {
        cout << arr[j];
    }
    return 0;
}