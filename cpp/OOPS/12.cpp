#include<iostream>
using namespace std;
class MyClass {
    private:
        int value;
    public:
        MyClass(int value){
            this->value=value;
        }
        
        int getValue() const { // Const member function
            return value;
        }
};
int main(){
    const MyClass obj(10); 
   // Constant object
    int x = obj.getValue();
    cout<<x;
    // OK, invoking a const member function on a constant object
    //this only works with constant object 
    return 0;
}