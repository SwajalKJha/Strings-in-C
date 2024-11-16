#include <stdio.h>
int string_compare(const char *str1, const char *str2);
int main()
{
    char string1[100]; 
    char string2[100]; 

    printf("Enter the first string: ");
    fgets(string1, sizeof(string1), stdin);
    
    printf("Enter the second string: ");
    fgets(string2, sizeof(string2), stdin);
    
    for (int i = 0; string1[i] != '\0'; i++) 
    {
        if (string1[i] == '\n') 
        {
            string1[i] = '\0';
            break;
        }
    }
    for (int i = 0; string2[i] != '\0'; i++) 
    {
        if (string2[i] == '\n') 
        {
            string2[i] = '\0';
            break;
        }
    }

    if (my_strcmp(string1, string2) == 0) 
    {
        printf("The strings \"%s\" and \"%s\" match.\n", string1, string2);
    } 
    else 
    {
        printf("The strings \"%s\" and \"%s\" do not match.\n", string1, string2);
    }
    return 0;
}

int string_compare(const char *str1, const char *str2) 
{
    while (*str1 != '\0' && *str2 != '\0') 
    {
        if (*str1 != *str2) 
        {
            return (unsigned char)(*str1) - (unsigned char)(*str2);
        }
        str1++;
        str2++;
    }
    return (unsigned char)(*str1) - (unsigned char)(*str2);
}

