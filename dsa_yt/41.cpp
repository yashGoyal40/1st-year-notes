#include<iostream>
using namespace std;
int print_array(char a[],int b){
    for(int i=0;i<=b;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
int main(){
    char ch[10]={'a','b','c','d','e','f','g','h','i','j'};
    print_array(ch,9);
    cout<<endl;
    char ch1[10]={'a','b'};
    print_array(ch1,9);
    cout<<"a";
    //in case of character array bank spaces will be intiallized 
    
    return 0;
}