//shallow and deep coppy 
//default coppy constructor -> shallow coppy
//its saved in same memory 
#include<iostream>
#include<string>
using namespace std;
class hero{
    private:
    char lavel;
    int health;

    public:
    string name;

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
        //this is done to perform deep coppy 

        // this->name = tmp.name
        //this will perform shallow coppy 
        //ie. some storage is used by both or both objects will point to same storage 
        //so change in one will effect other 
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

};

int main(){
    hero h1("yash",10,'A');
    hero h2(h1);
    hero h3("sparsh",20,'B');
    //coppy assignment operator 
    h1=h3;
    h1.print();
    h3.print();
}