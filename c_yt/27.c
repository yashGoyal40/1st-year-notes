#include<stdio.h>
int main(){
    int a[] = {2,3,4,5,6,6,8,7,9};
    int *p =a;
    printf("%d\n",*p++);
    printf("%d\n",*p);
    printf("%d\n",*++p);
    printf("%d\n",*p);
    p-=2;
    printf("%d %d\n",*++p,*p++);
    p++;
    printf("%d %d %d\n",*--p,*--p,*--p);

    int b[]={10,20,30,40,50};
    int* q=&b[4];
    printf("%d\n",*q);
    printf("%d",*(q-4));


    return 0;
}