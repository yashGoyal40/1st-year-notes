#include<iostream>
using namespace std;
int main(){
    int a=1;
    while(a<=5){
        int b=5;
        while(b>a){
            cout<<"  ";
            b--;
        }
        int c=1;
        while(c<=a){
            cout<<"* ";
            c++;
        }
        int d=1;
        while(d<a){
            cout<<"* ";
            d++;
        }
        cout<<endl;
        a++;
    }
    int e=1;
    while(e<5){
        int f=1;
        while(f<=e){
        cout<<"  ";
        f++;
        }
        int g=4;
        while(g>=e){
            cout<<"* ";
            g--;
        }
        int h=4;
        while(h>e){
            cout<<"* ";
            h--;
        }
        cout<<endl;
        e++;
    }
    return 0;
}