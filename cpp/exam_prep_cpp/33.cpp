#include<bits/stdc++.h>
using namespace std;

int main()
{
    fstream fp;
    fp.open("naya_file",ios::out);
    if(fp){
        fp<<"ye hai mera naya file\n";
        fp<<"ye hai uska dusra line\n";
    }    
    fp.close();

    fp.open("naya_file",ios::in);
    string l;
    while(getline(fp,l)){
        cout<<l<<endl;
    }
    fp.close();
    return 0;
}