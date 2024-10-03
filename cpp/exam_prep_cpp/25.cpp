//compile time memory allocation 

// run time memory allocation 


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int b =4; //compile time
    cout<<b<<endl; 

    int *a =  new int(3); //innitially  reserver 3 spaces 
    a[0] = 5;
    a[1] = 5;
    a[2] = 5;
    a[3] = 5;
    a[4] = 5;
    //an be more that 3 
    for(int i=0;i<5;i++){

    cout<<a[i]<<" ";
    }

    delete [] a; //will prevent form memory leak 
    return 0;
}