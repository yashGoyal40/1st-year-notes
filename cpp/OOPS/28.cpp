//freind of a class

#include<iostream>
using namespace std;


class obj{
    public:
    int obj_weight;
    private:
    int obj_flag;

    friend void set_flag(obj& temp,int f);
    friend int get_flag(obj& temp);


};

void set_flag(obj &temp,int f){
    temp.obj_flag=f;
}
int get_flag(obj &temp){
    return temp.obj_flag;
}


int main(){
    obj yash;
    yash.obj_weight=90;
    set_flag(yash,10);
    int a = get_flag(yash);
    cout<<a;

}