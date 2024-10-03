#include<stdio.h>
int prime_no(a){
    int c=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            return 0;
            c=1;
            break;
        }
    }
    if(c==0){
        return 1;
    }
}
int main(){
    int prime , count=1 , sum=2 ;
    printf("enter the number of prime numbers you want to add: ");
    scanf("%d",&prime);
    if(prime==1){
        printf("%d",2);
    }
    else{
    for(int i=3;i>0;i++){
        if(prime_no(i)){
            count=count+1;
            sum+=i;
            if(count==prime){
                break;
            }
        }
        else{
            continue;
        }
    }
    printf("%d",sum);}
    return 0;
}