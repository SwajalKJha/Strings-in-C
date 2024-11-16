#include <stdio.h>

int string_length(const char *str1);
char *string_copy(char *str2, const char *str1, int n);

int main()
{
    char str1[100], str2[100];  
    printf("Enter the string: ");
    scanf("%[^\n]%*c", str1);  

    int length = string_length(str1);
    string_copy(str2, str1, length);
    printf("Length of String 1: %d\n", length);
    printf("String 2 is: %s\n", str2);  
    return 0;  
}
int string_length(const char *str1)
{
    int length = 0;
    while (*str1 != '\0')
    {
        length++;
        str1++;
    }
    return length;
}

char *string_copy(char *str2, const char *str1, int length) 
{
    int i = 0;
    for (i = 0; i < length && str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    return str2;
}

