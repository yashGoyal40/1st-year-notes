//parameterised constructor 

#include<iostream>
#include<string>
using namespace std;

class Hero{
    private:
    int price;
    string color;
    public:

    Hero(int price){
        this->price=price;
        //this is acting like pointer to the object/instacnce 

        // price=price;
        // this is assigning price value to the price ie. the nearest price instead of the actual price

        //so this is used to assign acctual price of object 
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
    Hero ramesh(100);

    //dynamically 
    Hero *suresh = new Hero(10000);

    cout<<suresh->getPrice()<<endl;

    return 0;   
}