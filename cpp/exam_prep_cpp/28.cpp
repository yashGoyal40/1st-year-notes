//abstract class -> no definition only declaration  -> pure virtual functions 

//concrete class -> no virtual functions 

#include<iostream>
class Base {
public:
    virtual ~Base() {
        // Virtual destructor
        std::cout << "Base destructor" << std::endl;
    }
};

class Derived : public Base {
public:

    ~Derived() {
        std::cout << "Derived destructor" << std::endl;
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr;  // Calls the Base and then the Derived destructor
    return 0;
}


//virtual destructors are importent to call base class destructor  