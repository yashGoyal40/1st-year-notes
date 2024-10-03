#include<stdio.h>
#include<stdlib.h>
int main(){
    struct date{
        int dd;
        int mm;
        int yy;
        char* name;
    };
    struct date *ptr = malloc(sizeof(struct date));
    scanf("%d",&ptr->dd);
    scanf("%d",&ptr->mm);
    scanf("%d",&ptr->yy);
    getchar();
    ptr->name = (char*)malloc(20*sizeof(char)); 
    gets(ptr->name);
    puts(ptr->name);
    return 0;
}