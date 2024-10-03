#include<stdio.h>
int main(){
    char alpha;
    printf("enter the alphabet: ");
    scanf("%c",&alpha);
    switch(alpha){
        case 'a':
        printf("apple\n");
        // break;
        case 'b':
        printf("banana\n");
        break;
        default:
        printf("default\n");
    }
    // printf("%s",12>13 ? "wtf" : "alright");
    return 0;
}