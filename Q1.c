#include <stdio.h>

int string_length(const char *str);

int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]%*c", str); 

    int length = string_length(str);
    printf("Length of the string: %d\n", length);
}

int string_length(const char *str)
{
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}

