#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], str2[100], result[200];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 

    // a) Concatenation of two strings
    sprintf(result, "%s%s", str1, str2);
    printf("Concatenated string: %s\n", result);

    // b) Copying one string to another
    char copy[100];
    sprintf(copy, "%s", str1);
    printf("Copied string: %s\n", copy);

    // c) Length of a string
    int length = sprintf(result, "%s", str1); 
    printf("Length of the first string: %d\n", length - 1); 

    return 0;
}

