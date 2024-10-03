#include<iostream>
using namespace std;
int b(int &b){
    b++;
    return 0;
}

int c(int*b){
    (*b)++;
    return 0;
}
int main(){
    int a=4;
    cout<<a<<endl;
    b(a);
    cout<<a<<endl;
    int*p=&a;
    c(&a);
    //c(p);
    cout<<a<<endl;

}
