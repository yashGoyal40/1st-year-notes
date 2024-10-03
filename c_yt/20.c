// storage class 
static int s = 4;
int l=0;

//default class for global variable is static 
#include<stdio.h>
#include"21.c"

int main(){
    //Auto class 
    auto int c;
    printf("%d\n",c);
    //both the lines are same
    //auto variables are initiallised with garbage vlaue
    printf("%d\n",l);
    printf("%d\n",s);

    //static storage class 
    //local scope
    static int b;
    printf("%d\n",b);
    //static variables are initiallised with 0 vlaue
    b++;
    printf("%d\n",b); 

    //register storage class
    //the are not garuntee
    //local scope
    register int i=1;
    printf("%d\n",i);
    //recomended to be initialsed with some value


    //extern storage class
    // variable/function is defined in another file 
    // extern xtern_var;
    extern int xtern_var;
    // file 21.c is included which have defined xtern_var
    // global scope
    printf("%d",xtern_var);
    return 0;

}
