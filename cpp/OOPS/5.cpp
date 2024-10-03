//GEtter and setters 

#include<iostream>
using namespace std;


// getter will fetch the data directly 
// will return a value 
// no arguments required

// stter will be a void function
// will not return anything 
// will take arguments 


class man{
    private:
    int health;
    public:
    char level;

    int getHealth(){
        return health;
    }

    int getLevel(){
        return level;
    }

    void setHealth(int h){
        if(h>=0 && h<=100)
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

};

int main(){
    man yash;

    yash.setHealth(100);
    yash.level='A';

    cout<<"Health is: "<<yash.getHealth()<<endl;

    cout<<"level is: "<<yash.level<<endl;

    return 0;
}