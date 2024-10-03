#include<iostream>
using namespace std;

class hero{
    private:
    char lavel;
    int health;

    public:

    hero(int health,char level){
        this->health=health;
        this->lavel=level;
    }

    //coppy constructor

    hero(hero &tmp){   //& is used for pass by refrence  
        this->health = tmp.health;
        this->lavel = tmp.lavel;

        //pass by reference is used because if we pass by value again coppy constructor will be called 
        //that will get stuck in an infinite loop
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
};
int main(){

    // hero *suresh=new hero;
    // suresh->setHealth(100);
    // suresh->setLevel('A');

    hero *suresh=new hero(100,'A');

    hero homie(100,'B');


    hero *ritesh(suresh);

    hero ramesh(*suresh);

    hero *h1(&homie);

    hero h2(homie);

    //will make a coppy of suresh as ritesh 
    //all the values will be same 
    //coppy constructor will automatically genrate

    //we can also write our own 

    cout<<ritesh->getHealth()<<endl;
    cout<<ritesh->getLevel()<<endl;

    cout<<h1->getHealth()<<endl;
    cout<<h1->getLevel()<<endl;

    cout<<ramesh.getHealth()<<endl;
    cout<<ramesh.getLevel()<<endl;


}