#include <stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int *p=a;
    printf("\n%d",*(p+1));
    printf("\n%d",*(a+1));
    printf("\n%d",p[1]);
    printf("\n%d",1[p]);
    printf("\n%d",1[a]);
    return 0;
}