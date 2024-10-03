//dynamic polymorphism 
//run time polymorphism

//method overriting

//in ambiguity a class inherits multiple classes which have functions with same name so we used scope resolution :: symbol of removing that 

//in method overriting the child class will overwite the parent function

#include<iostream>
using namespace std;

class animal{
    public:
    void speak(){
        cout<<"animal is speaking"<<endl;
    }
};

class dog : public animal{
    public:
    void speak(){
        cout<<"animal is barking"<<endl;
    }
};

int main(){
    animal a1;
    a1.speak();
    dog d1;
    d1.speak();
    return 0;
}

//Rules: 
// method of parent and child class must have same name and parameters 
//inheritance 