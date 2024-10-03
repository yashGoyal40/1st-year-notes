//encapsulation -> wraping up data members and functions 

//data members -> properties 
//functions 
//encapsulated in a class 

//fully encapsulated class -> every data members are marked private 

// why?

// data hiding 
//can make read only class if we want 
//code reusability 
//unit testing   

#include<iostream>
#include<string>
using namespace std;

class student{

    
    private:
    string name;
    int age;
    int height;

    public:
    student(string name,int age,int height){
        this->age=age;
        this->height=height;
        string str = name;
        this->name = str;
    }
    int getAge(){
        return this->age;
    }
    ~student(){
        cout<<"destructed";  
    }


};

int main(){

    student yash("yash",19,6);

    cout<<yash.getAge();

    return 0;
}