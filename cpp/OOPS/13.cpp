//static

//create data member that belongs to class 
//can accessed without making an object 

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
    ~hero(){
        cout<<"destructor called"<<endl;
    }

};

int hero::timeToComplete=10;

int main(){
    cout<<hero::timeToComplete<<endl;
    //recommended

    hero a("yash",100,'A');
    hero *b=new hero("yash",100,'A');
    cout<<a.timeToComplete<<endl;

    b->timeToComplete=15;
    cout<<a.timeToComplete<<endl;
    //not recommended 
    delete b;


    return 0;
}


