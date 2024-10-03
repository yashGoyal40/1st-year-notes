#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    fstream myfile;
    myfile.open("hello.txt",ios::in);
    if(myfile.is_open()){
        string l;
        while(getline(myfile,l)){
            cout<<l<<endl;
        }
    }

    return 0;
}