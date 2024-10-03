//dynamic allocation 
// int *i = new int;
#include<iostream>
using namespace std;


class Hero{
    public:
    int health;
    char level;
};

int main(){

    //declare dynamically 
    Hero *h1 = new Hero;
    h1->health=100;
    h1->level='A';
    
    cout<<"level is: "<<(*h1).health<<endl;
    cout<<"health is: "<<h1->level;
    //can be written in both ways
    return 0;
}