//destructor
//dealocate the memory 

//same name as class
//no return type 
//no parameters 

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
    // ~ (tilda)this is use to identify the destructor 

    //DESTRUCTOR
    ~hero(){
        cout<<"destructor called"<<endl;
    }

};

int main(){
    //static
    hero a("yash",100,'A');
    hero c("yash",100,'A');

    //for static destructor is called automaticallty 


    //dynamic
    hero *b=new hero("sparsh",20,'C');
    //we have to call destructor mannually for dynamic object
    delete b;
    
    return 0;
}