#include<iostream>
#include<string>
using namespace std;

//constructor: object creation 
// no return type
// no i/p parameter(by default)

//by defaut there is a constructor
//default constructor

//but we can give input arguments to constructor 
// and we can create multiple constructors

class Car{
    private:
    int price;
    string color;
    public:

    Car(){
        cout<<"constructor called"<<endl;
    }

    void setColor(string c){
        color = c;
    }
    void setPrice(int p){
        price=p;
    }

    int getPrice(){
        return price;
    }

    string getColor(){
        return color;
    }

};


int main(){

    //staticlly 
    Car ramesh();

    //dynamically 
    Car *suresh = new Car();

    return 0;   
}