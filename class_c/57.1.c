#include<stdio.h>
int main(){
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int loc;
    int n=10,m;
    printf("enter the number: ");
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        if(a[i]==m)loc=i;
    }
    if(loc==-1){
        printf("not found");
    }
    else{
        printf("%d",loc+1);
    }
    return 0;
}