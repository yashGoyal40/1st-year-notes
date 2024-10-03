#include<iostream>
using namespace std;

class human{
    public:
    int height;
    int weight;
    int age;

    human(int human_height,int human_weight,int human_age):height(human_height),weight(human_weight),age(human_age){}

};

class male: protected human{

    public:

    male(int male_height,int male_weight,int male_age):human(male_height,male_weight,male_age){}
    
    int getHeight(){
        return this->height;
    }


};

class boy : public male{

    public:

    boy(int boy_height,int boy_weight,int boy_age): male(boy_height,boy_weight,boy_age){}

    int getAge(){
         return this->age;
    }

};



int main(){
    male yash(10,100,19);
    cout<<yash.getHeight();
    boy sparsh(10,100,14);
    // cout<<sparsh.age
    // will be in accessable because that was protected and the mode is private so this will act as protected 

    cout<<endl<<sparsh.getAge();

    return 0;
}