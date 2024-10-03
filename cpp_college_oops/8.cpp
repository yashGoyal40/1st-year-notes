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

    void operator++ (){
        this->roll = this->roll + 1;
    }

};
int main(){
    Class a;
    a.set_name("yash");
    a.set_roll(12);

    ++a;
    cout<<a.get_roll();
   

    return 0; 
}
