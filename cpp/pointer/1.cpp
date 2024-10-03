#include<iostream>
using namespace std;
int main(){
    int num =5;
    //memory block -> name num
    // value -> 5
    // address of block -> stored by  pointer
    //address Operator -> &
    cout<<&num<<endl;
    // int * -> data type of pointer 
    int * ptr = &num;
    cout<<ptr;

    // int *ptr;  (bad practice)[instead innitiallise by zero]
    //int *p  -> p is a pointer to a variable of int datatype
    // *p will give the value at variable 
    // p will give the address 
    cout<<endl<<*ptr;
    cout<<endl<<num;


    return 0;
}