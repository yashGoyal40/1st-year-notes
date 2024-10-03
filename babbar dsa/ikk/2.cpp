// You are using GCC
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
   vector<string> v;
   int a,b;
   string ele;
   cin>>a;
   for(int i=0;i<a+1;i++){
       getline(cin,ele);
       v.push_back(ele);
   }
   
   cin>>b;
   for(int i=0;i<b+1;i++){
       getline(cin,ele);
       v.push_back(ele);
   }
   cout<<"Catalog:";
   for(int i=0;i<v.size();i++){
       if(i==a+1){
           continue;
       }
       cout<<v[i]<<endl;
   }
}