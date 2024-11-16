#include <stdio.h>
#include <string.h>

int first_occurrence(const char *str, char ch);
int count_occurrences(const char *str, char ch);
int find_substring(const char *str, const char *substr);
int starts_with(const char *str, const char *substr);
int ends_with(const char *str, const char *substr);

int main() 
{
    char mainStr[100], ch, substr[100];

    printf("Enter the main string: ");
    fgets(mainStr, sizeof(mainStr), stdin);
    mainStr[strcspn(mainStr, "\n")] = '\0'; 

    printf("Enter a character to search for: ");
    scanf(" %c", &ch);

    printf("Enter a substring to search for: ");
    scanf("%s", substr);

    printf("First occurrence of '%c': %d\n", ch, first_occurrence(mainStr, ch));
    printf("Count of '%c': %d\n", ch, count_occurrences(mainStr, ch));
    printf("Index of substring '%s': %d\n", substr, find_substring(mainStr, substr));
    printf("Starts with '%s': %d\n", substr, starts_with(mainStr, substr));
    printf("Ends with '%s': %d\n", substr, ends_with(mainStr, substr));

    return 0;
}
int first_occurrence(const char *str, char ch) 
{
    for (int i = 0; str[i]; i++) 
    {
        if (str[i] == ch) return i;
    }
    return -1; 
}

int count_occurrences(const char *str, char ch) 
{
    int count = 0;
    for (int i = 0; str[i]; i++) 
    {
        if (str[i] == ch) count++;
    }
    return count;
}

int find_substring(const char *str, const char *substr) 
{
    char *pos = strstr(str, substr);
    return pos ? (pos - str) : -1; 
}

int starts_with(const char *str, const char *substr) 
{
    return strncmp(str, substr, strlen(substr)) == 0;
}

int ends_with(const char *str, const char *substr) 
{
    int strLen = strlen(str), subLen = strlen(substr);
    return strLen >= subLen && strcmp(str + strLen - subLen, substr) == 0;
}
