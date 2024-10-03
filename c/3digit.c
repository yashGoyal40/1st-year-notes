#include <stdio.h>
int main()
{
    int a, b, c;
    printf("please enter a digit: ");
    scanf("%d", &a);
    printf("enter second digit: ");
    scanf("%d", &b);
    printf("enter the third digit: ");
    scanf("%d", &c);
    if (a != b && a != c && b != c)
    {
        if (a > b && a > c)
        {
            printf("%d is the maximum number",a);
        }
        if (b > a && b > c)
        {
            printf("%d is the maximum number",b);
        }
        if (c > b && c > b)
        {
            printf("%d is the maximum number",c);
        }
    }
    else
    {
        printf("please enter all distinguished numbers");
    }

    return 0;
}