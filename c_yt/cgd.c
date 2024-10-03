#include<stdio.h>
int main(){
    int a,b;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("enter another number: ");
    scanf("%d",&b);
    if(a>b){
        int gcd=1;
        for(int i=2;i<=b;i++){
            if(a%i==0 && b%i==0 && i>gcd){
                gcd = i;
            }
        }
        printf("The gcd is : %d",gcd);
        int lcm = 1;
        for(int i=a;i<=a*b;i++){
            if(i%a==0 && i%b==0){
                lcm=i;
                break;
            }
        }
        printf("\nthe lcm is : %d",lcm);
    }
    else if(b>a){
        int gcd=1;
        for(int i=2;i<=a;i++){
            if(a%i==0 && b%i==0 && i>gcd){
                gcd = i;
            }
        }
        printf("The gcd is : %d",gcd);
        int lcm = 1;
        for(int i=b;i<=a*b;i++){
            if(i%a==0 && i%b==0){
                lcm=i;
                break;
            }
        }
        printf("\nthe lcm is : %d",lcm);
    }
    else{
        printf("As both of them are same GCD is : %d",a);
        printf("\nAs both of them are same lcm is : %d",a);

    }
    return 0;
}


