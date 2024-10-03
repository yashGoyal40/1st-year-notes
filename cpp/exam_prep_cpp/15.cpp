#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream myfile;

    myfile.open("hello.txt",ios::out); //mode to write 

    if(myfile.is_open()){
        myfile<<"hello\n";
        myfile<<"this is line\n";
        myfile.close();
    }

    myfile.open("hello.txt",ios::app); //mode to write 

    if(myfile.is_open()){
        myfile<<"hello back again\n";
        myfile.close();
    }


 
    return 0;
}