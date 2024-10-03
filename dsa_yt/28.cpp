#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=0,c=0,d=0,temp,temp1;
    cout<<"Enter the ammount: ";
    cin>>n;
    if(n>100){
        a=n/100;
        temp=n%100;
        if(temp>50){
            b=1;
            temp1=temp-50;
            if(temp1<20){
                d=temp1;
            }
            else if(temp1>20){
                c=temp1/20;
                d=temp1%20;

            }
            else{
                c=1;
            }

        }
        else if(temp<50){
            if(temp<20){
                d=temp;
            }
            else if(temp>20){
                c=temp/20;
                d=temp%20;

            }
            else{
                c=1;
            }
        }
        else{
            b=1;
        }



    }
    else if(n<100){
        if(n>50){
            b=1;
            temp=n-50;
            if(temp<20){
                d=temp;
            }
            else if(temp>20){
                c=temp/20;
                d=temp%20;

            }
            else{
                c=1;
            }

        }
        else if(n<50){
            if(n<20){
                d=n;
            }
            else if(n>20){
                c=n/20;
                d=n%20;

            }
            else{
                c=1;
            }
        }
        else{
            b=1;
        }
    }
    else{
        a=1;
    }
    cout<<endl<<"no of 100 rupee note is: "<<a<<endl<<"no of 50 rupee note is: "<<b<<endl<<"no of 20 rupee note is: "<<c<<endl<<"no of 1 rupee note is: "<<d<<endl;
    return 0;
}