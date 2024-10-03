
#include<string>
class student{

private:
int reg_no;
int hostel_no;

public:
char gender;
std::string course;

void setreg_no(int h){
    reg_no = h;
}

void set_hostel(int h){
    hostel_no = h;
}

int getreg_no(){
    return reg_no;
}

int getHostel(){
    return hostel_no;
}

};