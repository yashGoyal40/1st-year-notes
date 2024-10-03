#include<bits/stdc++.h>
using namespace std;
int main()
{

    ifstream file("yash.txt");

    if(file.is_open()){
        cout<<"in file"<<endl;
    }

    string s;

    while(!file.eof()){
        getline(file,s);

        cout<<s<<endl;
    }

    file.close();
 
    return 0;
}