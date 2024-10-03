//static function
//can be called throw class 
// not depend on object no need to create an object 
//no this keyword 
//can access only static members  


#include<iostream>
#include<string>
using namespace std;
class hero{
    private:
    char lavel;
    int health;

    public:
    string name;
    static int timeToComplete;

    hero(string name,int health,char level){
        this->name=name;
        this->health=health;
        this->lavel=level;
    }


    hero(hero& tmp){ 
        this->health = tmp.health;
        this->lavel = tmp.lavel;
        string str = tmp.name;
        this->name = str;
    }


    void setLevel(char h){
        lavel = h;
    }   

    void setHealth(int h){
        health =h;
    }
    char getLevel(){
        return lavel;
    }
    int getHealth(){
        return health;
    }

    void print(){
        cout<<"Name is: "<<name<<endl;
        cout<<"Health is: "<<health<<endl;
        cout<<"Lavel is: "<<lavel<<endl;
    }

    //static function 
    static void random(){
        // cout<<this->helth;
        //can not be used 

        cout<<timeToComplete<<endl;
    }

    ~hero(){
        cout<<"destructor called"<<endl;
    }

};

int hero::timeToComplete=10;

int main(){
    hero::random();
}