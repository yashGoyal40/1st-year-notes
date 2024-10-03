#include<iostream>
#include<string>
#include<vector>
using namespace std;
int spaces=0;
struct car{
    string number;
    string model;//small mid large 
};
  
void create(vector<car>& parkinlot){
    int added_spaces;
    cout<<"enter the number of storages you want to extend: ";
    cin>>added_spaces;
    cin.get();
    int l=spaces;
    spaces+=added_spaces;
    for(int i=l;i<spaces;i++){
        car new_car;
        new_car.number="nil";
        new_car.model="nil";
        parkinlot.push_back(new_car);
    }
    cout<<"Parking lot extended by "<<added_spaces<<" spaces"<<endl;
    return;
    
}

void allot(vector<car> &parkinglot){
    int car_pos=-1;
    string nil="nil";
    int len=parkinglot.size();
    for(int i=0;i<len;i++){
        if(parkinglot[i].number.compare(nil)==0){
            car_pos=i;
            break;
        }
    }
    if(car_pos==-1){
        cout<<"Parking lot is full please create some more spaces"<<endl;
    }
    else{
        string car_model,car_number;
        cout<<"enter the number of your car: ";
        getline(cin,car_number);
        cout<<"enter the model of your car [small/big/mid]: ";
        getline(cin,car_model);

        parkinglot[car_pos].model=car_model;
        parkinglot[car_pos].number=car_number;
        cout<<"Car sucesfully added"<<endl;
    } 
}

void remove(vector<car> &parkinglot){
    string car_number;
    cout<<"Enter the number of your car: ";
    getline(cin,car_number);
    int flag=0;
    int len=parkinglot.size();
    for(int i=0;i<len;i++){
        if(parkinglot[i].number.compare(car_number)==0){
            parkinglot[i].number="nil";
            parkinglot[i].model="nil";
            flag=1;
            cout<<"Car is successfully removed"<<endl;
            break;
        }
    }
    if(flag==0){
        cout<<"Please reconfirm the number! Car not found"<<endl;
    }
}

void status(vector<car> &parkinglot){
    int small=0;
    int mid=0;
    int big=0;

    int len=parkinglot.size();
    cout<<"Total number of spaces are: "<<len<<endl;
    for(int i=0;i<len;i++){
        if(parkinglot[i].model.compare("mid")==0){
            mid++;
        }
        if(parkinglot[i].model.compare("small")==0){
            small++;
        }
        if(parkinglot[i].model.compare("big")==0){
            big++;
        }
    }
    cout<<"Total number of cars are: "<<mid+small+big<<endl;
    cout<<"Total number of small cars are: "<<small<<endl;
    cout<<"Total number of mid cars are: "<<mid<<endl;
    cout<<"Total number of big cars are: "<<big<<endl;

}

int main(){
    string a;
    string al="allot",r="remove",s="status",c="create";
    cout<<"ACTIONS: "<<endl<<"*.) allot"<<endl;
    cout<<"*.) remove"<<endl;
    cout<<"*.) status"<<endl;
    cout<<"*.) create"<<endl;
    cout<<"*.) end"<<endl;
    vector<car> parkinglot(spaces);

    while(a.compare("end")!=0){

    cout<<"SELECT THE ACTION: ";
    getline(cin,a);


    if(a.compare(c)==0){
        create(parkinglot);
    }
    else if(a.compare(al)==0){
        allot(parkinglot);
    }

    else if(a.compare(r)==0){
        remove(parkinglot);
    }

    else if(a.compare(s)==0){
        status(parkinglot);
    }
    else if(a.compare("end")==0){
        break;
    }
    else{
        cout<<"Please enter a correct option !"<<endl;
    }
    }

}