#include<stdio.h>
// struct book{
//         char title[20];
//         char author[20];
//         int pages;
//         float price;
// };
// void main(){ 
//     struct book Cbook;
//     printf("%d",sizeof(Cbook));
//     getch();
// }

// struct ex
// {
//     char p;
// }el = {'a'};
// struct ex pl = {'b'};
// void main(){
//     printf("%d",pl.p);
// }
// union ul{
//     union u{
//         int i;
//         int j;
//     }a[10];
//     int b[10];
// }ul;

// void main(){
//     printf("%d",sizeof(ul));
//     printf("%d",sizeof(ul.a));
// }
// #include<stdio.h>

int main ()
{
    int x = 0;
    int *ptr = &x;
    printf("%p\n", *ptr);
    x++;
    printf("%p\n ", ptr);
    return 0;
}