#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,m,n,i;
    printf("\n enter initial value : ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    printf("\n enter value as per initial requirements");
    for(i=0;i<n;i++)
    scanf("%d",ptr+i);
    printf("\n enter values are: ");
    for(i=0;i<n;i++)
    printf("\n%d",*(ptr+i));
    ptr=(int*)realloc(ptr,(n+2)*sizeof(int));
    *(ptr+n)=200;
    *(ptr+n+1)=300;
    for(i=0;i<n+2;i++){
        printf("%d\n",*(ptr+i));
    }
    free(ptr);
    printf("\n memory deallocated");
    return 0;

}