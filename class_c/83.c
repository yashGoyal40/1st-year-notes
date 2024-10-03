#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];

    printf("Enter the first string: ");
    fgets(str1, 100, stdin);

    printf("Enter the second string: ");
    fgets(str2, 100, stdin);

    strcpy(result, str1);

    strcat(result, str2);

    printf("Concatenated string: %s", result);

    return 0;
}
