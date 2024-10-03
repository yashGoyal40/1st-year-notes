#include<iostream>
using namespace std;

void update(int **p2){
    p2=p2+1;
    //no change 
}

void update1(int **p2){
    *p2 = *p2 +1;
    //will change 
}

void update2(int **p2){
    **p2 = **p2 +1;
    //will change 
}
int main(){
    int i=5;
    int *p=&i;
    int **p2 = &p;
    cout<<p2<<endl;
    update(p2);
    cout<<p2<<endl;

    cout<<endl<<*p2<<endl;
    update1(p2);
    cout<<*p2<<endl;
    *p2 = *p2 -1;


    cout<<endl<<**p2<<endl;
    update2(p2);
    cout<<**p2<<endl;


    return 0;
}