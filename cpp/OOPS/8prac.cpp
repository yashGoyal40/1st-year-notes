#include<iostream>
using namespace std;

class hero{
    private:
    char lavel;
    int health;
    public:

    hero(){
        cout<<"constructor is called"<<endl;

        //if any argument is not passed while creating the object this will act as a constructor 
    }

    hero(int health){
        this->health=health;
        cout<<"health is assigned"<<endl;

        //if one argument is passed while creating the object this will act as a constructor 

    }
    
    hero(int health,char level){
        this->health=health;
        this->lavel=level;
        cout<<"health & lavel is assigned"<<endl;
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
    hero *suresh=new hero;
    hero ramesh(100);
    hero * mahesh = new hero(100,'A');
    cout<<ramesh.getHealth()<<endl;
    cout<<mahesh->getHealth()<<endl;
}