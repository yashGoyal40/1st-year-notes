#include<stdio.h>
int main(){
    int l;
    printf("enter the number of element\n");
    scanf("%d",&l);
    int array[500];
    for(int i=0;i<l;i++){
        printf("enter a number \n");
        scanf("%d",&array[i]);
    }
    printf("\n forward array \n");
    for(int i=0;i<l;i++){
        printf("%d\n",array[i]);    
    }
    printf("\n reversed array\n");
    for(int i=l-1;i>=0;i--){
        printf("%d\n",array[i]);
    }
    int _sum=0;
    for(int i=0;i<l;i++){
        _sum+=array[i];
    }


    printf("\n The SUM of all elements is \n%d\n",_sum);
    float sum = _sum;
    printf("\n The AVR of all elements is \n%f\n",sum/l);

    int max=array[0];
    for(int i=0;i<l;i++){
        if(array[i]>max){
            max= array[i];
        }
    }
    printf("\n The MAX of all elements is \n%d\n",max);

    int min=array[0];
    for(int i=0;i<l;i++){
        if(array[i]<min){
            min= array[i];
        }
    }
    printf("\n The MIN of all elements is \n%d\n",min);

}