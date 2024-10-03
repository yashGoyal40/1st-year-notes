int maze(int n, int m){ 
    int rightWays = 0;
    int downWays = 0;
    if(n==1 && m==1) return 1;
    if(n==1){  // cannot go down
        rightWays += maze(n,m-1);
    }
    if(m==1){  // cannot go right
        downWays += maze(n-1,m);
    }
    if(n>1 && m>1){
        rightWays += maze(n,m-1);
        downWays += maze(n-1,m);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}
#include<stdio.h>
int main(){
    int m,n;
    printf("enter the number of columns: ");
    scanf("%d",&m);
    printf("enter no of rows: ");
    scanf("%d",&n);
    int noOfWays = maze(n,m);
    printf("No of ways are: %d",noOfWays);
    return 0;
}