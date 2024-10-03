//types of inheritance 
//|->single 
//|->multi level
//|->multiple
//|->hybrid
//|->hierarchical 

#include<iostream>
using namespace std;

//multi level inheritance 

class Animal{
    public:
    int age;
    int weight;

    Animal(int a_age,int a_weight):age(a_age),weight(a_weight){}

    void speak(){
        cout<<"speaking "<<endl;
    }
};

class dog:public Animal{
    public:

    dog(int d_age,int d_weight):Animal(d_age,d_weight){}


};

class pug:public dog{
    public:
    pug(int p_age,int p_weight):dog(p_age,p_weight){}

};

int main(){
    pug d1(4,40);
    d1.speak();
    return 0;
}