#include<stdio.h>
int main(){
    int a=10;
    int *p=&a;
    printf("%d\n",p);
    //we can add integer value in pointer 
    p+=1;
    // if we add 1 the 4 bytes will be added
    // let p = 6422296 then  
    // p+1 = 6422296 + (1*sizeof(dataType))
    // p+1 = 6422296 + (1*sizeof(int))
    // p+1 = 6422296 + (1*4)
    // p+1 = 6422300
    printf("%d\n",p);
    p+=1;
    printf("%d\n",p); //6422304
    printf("%d\n",*p);// garbage value 

    // will be usefull in array

    int b[5]={1,2,3,4,5};
    int *q =&b[0];   // by default it will take 0th location
    printf("%d\n",*q);
    q+=2;
    printf("%d\n",*q);
    *q = 8;
    for(int i=0;i<5;i++){
        printf("%d ",b[i]);
    }
    printf("\n");
    // subtraction 
    q--;
    printf("%d\n",*q);
    q = &b[1];
    int *s = &b[4];
    int d = s-q;
    // a[0] - a[3]  => let 1000 - 1012 ({1000,1004,1008,1012...})  => 12/4  => 3(steps away)
    // this will give distance between the two pointers 
    printf("%d\n",d); 
    d = q-s;
    printf("%d",d); 




    
}