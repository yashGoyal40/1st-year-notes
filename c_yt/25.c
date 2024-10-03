#include<stdio.h>
int main(){
    int a=10;
    int *p=&a;
    int* *q =&p;
    printf("the value of a= %d %d %d\n",a,*p,**q);
    // a= 10  
    //*(p) => *(&a) => a => 10
    // technically *q=p (q is a pointer to p) 
    // *(*(q)) => *(p) => a => 10
    int** *r=&q;
    printf("the value of a= %d %d %d\n",a,*p,**q,***r);
    // **(*r) => *(*q) => *p => a
    **q =25;
    printf("the value of a= %d %d %d\n",a,*p,**q,***r);
    ***r=50;
    printf("the value of a= %d %d %d\n",a,*p,**q,***r);

    return 0;
}