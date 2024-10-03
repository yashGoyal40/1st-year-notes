/* 
MAZE PATH  (one step)(right down)
rows r,collums c
(r,c) == (r-1,c)+(r,c-1)
///
(1,1) ==> (n,m)
*/
// cr(current row),cc(current column),er(end row),ec(end column)
int maze(int cr, int cc, int er, int ec){ 
    int rightWays =0;
    int downWays = 0;
    if(cr==er && cc==ec){
        return 1;
    }
    if(cr==er){ // only right ways
        rightWays += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){ // only down ways
        downWays += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightWays = maze(cr,cc+1,er,ec);
        downWays = maze(cr+1,cc,er,ec);
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
    int noOfWays = maze(1,1,n,m);
    printf("No of ways are: %d",noOfWays);
    return 0;
}