//inheritance 



#include<iostream>
using namespace std;


//super / parent class
class human{
    public:
    int height;
    int age;
    int weight;

    human(int human_height,int human_age): height(human_height),age(human_age){}
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight=w;
    }

};


//child / sub classes
class male: public human {
    public:
    string color;
    int sleep_time;

    male(int male_height ,int male_age, string male_color,int male_sleep_time) : human(male_height,male_age),color(male_color),sleep_time(male_sleep_time){}
    
    void sleep(){
        cout<<"male sleping"<<endl;
    }

};

class female:public human{

    public:
    female(int fmale_height,int fmale_age):human(fmale_height,fmale_age){}
    
    void call(){
        cout<<"someone is calling";
    }


};

int main(){

    male ob1(6,90,"balck",4);
    female ob2(5,30);
    cout<<ob1.age<<endl;
    ob1.setWeight(88);
    cout<<ob1.weight<<endl;
    cout<<ob1.height<<endl;
    cout<<ob1.color<<endl;
    ob1.sleep();

    return 0;
}