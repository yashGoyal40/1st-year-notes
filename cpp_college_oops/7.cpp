#include<iostream>
#include<string>
using namespace std;

class Class{
    private: 
    int roll;
    string name;
    public:
    void set_roll(int a){
        this->roll = a;
    }
    void set_name(string b){
        this->name = b;
    }
    int get_roll(){
        return this->roll;
    }
    string get_name(){
        return this->name;
    }

    Class operator+ (Class &obj1){
        Class temp;
        temp.name = this->name +  obj1.name;
        temp.roll = this->roll + obj1.roll;

        return temp;
    }

};
int main(){
    Class a;
    a.set_name("yash");
    a.set_roll(12);

    Class b;
    b.set_name("sparsh");
    b.set_roll(13);

    Class c;
    c = a + b; 
    cout << "Name: " << c.get_name() << endl;
    cout << "Roll: " << c.get_roll() << endl;

    return 0; 
}
