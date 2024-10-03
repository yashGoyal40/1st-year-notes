#include "5prac_stu.cpp"
#include<iostream>
#include<string>
using namespace std;

int main(){
    student yash;
    yash.course ="B-tech";
    yash.gender='M';

    yash.set_hostel(3);
    yash.setreg_no(12210366);

    cout<<yash.course<<endl;
    cout<<yash.gender<<endl;
    cout<<yash.getHostel()<<endl;
    cout<<yash.getreg_no()<<endl;
}