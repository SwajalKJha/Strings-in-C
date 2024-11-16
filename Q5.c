#include <stdio.h>
char* string_fun(char* result, const char* str);
int main()
{
    char str1[100] = "Hello, ";
    char str2[] = "world!";
    
    string_fun(str1, str2);
    printf("%s\n", str1); 
    
    return 0;
}

char* string_fun(char* result, const char* str) 
{
    while (*result) 
    {
        result++;
    }
    
    while ((*result++ = *str++));
    return result; 
}
