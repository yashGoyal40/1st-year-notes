#include<iostream>
using namespace std;
int main(){
    int arr[3]={1,2,3};
    char ar[8]= "abcdef";

    cout<<arr<<endl; //will give the address as usual 
    cout<<ar<<endl; //will give the whole string

    // char * ptr = ar;
    // char * ptr = &ar[0];
    char * ptr = &0[ar];

    cout<<ptr<<endl; //will give whole array 
    cout<<*(ptr+1)<<endl; //will give b

    char temp = 'z';

    char *p = &temp;

    cout<<p<<endl; //will start giving random value from buffer untill it does not get EOL character 

    // char *c = "abcdef"; RISKYYY!

    

    
    return 0;
}