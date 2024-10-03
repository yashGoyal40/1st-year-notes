//poly morphism 
// many forms 

//TYPES:
//compile time polymorphism  (static)
//run time polymorphism (dynamic)


//Comile Time -> function overloading 
//           |-> operator overloading




//function overloading 


#include<iostream>
#include<string>
using namespace std;

class A{
    public:
    int a;
    A(){}
    A(int ab):a(ab){}

    void sayHello(){
        cout<<"hello brother"<<endl;
    }
    void sayHello(string name){
        cout<<"hello "<<name<< " brother"<<endl;
    }

    //function overloading can only be done by changing arguments 

    // int sayHello(string name){
    //     cout<<"hello "<<name<< " brother"<<endl;
    //     return 1;
    // }

    //will give error 

    int sayHello(string name,int i){
        cout<<"hello "<<name<< " brother"<<endl;
        return i;
    }
    //will work

};

int main(){
    A obj;
    obj.sayHello();
    obj.sayHello("yash");
    obj.sayHello("yash",18);

}