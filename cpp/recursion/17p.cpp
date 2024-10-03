#include<bits/stdc++.h>
using namespace std;

void toh(int n,char from,char aux , char to){

    if(n==0){
        return;
    }

    toh(n-1,from,to,aux);
    cout<<"move disk "<<n<<" from "<<from<<" to "<<to<<endl;
    toh(n-1,aux,from,to);
}

int main()
{

    int n =3;
    toh(3,'A','B','C');
 
    return 0;
}