#include<iostream>
#include<string>
using namespace std;

class car{
    private:
    int price;
    string color;
    public:
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

    //dynamic allocation
    car *maruti = new car;
    maruti->setColor("red");
    maruti->setPrice(1000000);

    cout<<"price is: "<<maruti->getPrice()<<endl;
    cout<<"color is: "<<maruti->getColor()<<endl;
    return 0;
}