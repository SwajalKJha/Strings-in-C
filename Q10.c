#include <stdio.h>
#include <string.h>
int string_to_integer(const char *str);
void integer_to_string(int num, char *str);

int main() 
{
    char numStr[20];
    printf("Enter a string of digits: ");
    scanf("%s", numStr);

    int number = string_to_integer(numStr);
    printf("String to Integer: %d\n", number);

    char str[20];
    integer_to_string(number, str);
    printf("Integer to String: %s\n", str);

    return 0;
}
int string_to_integer(const char *str) 
{
    int result = 0;
    int sign = 1;
    size_t i = 0;
    if (str[i] == '-') 
    {
        sign = -1;
        i++;
    } 
    else if (str[i] == '+') 
    {
        i++;
    }
    for (; str[i] != '\0'; i++) 
    {
        if (str[i] < '0' || str[i] > '9') 
        {
            printf("Invalid input: %s\n", str);
            return 0;
        }
        if (result > (2147483647 - (str[i] - '0')) / 10) 
        {
            printf("Overflow detected for input: %s\n", str);
            return 0;
        }
        result = result * 10 + (str[i] - '0');
    }
    return result * sign;
}

void integer_to_string(int num, char *str)
{
    int isNegative = 0;
    if (num < 0) 
    {
        isNegative = 1;
        num = -num;
    }

    int i = 0;
    do {
        str[i++] = (num % 10) + '0';
        num /= 10;
    } while (num > 0);

    if (isNegative) 
    {
        str[i++] = '-';
    }
    str[i] = '\0';
    for (int j = 0; j < i / 2; j++) 
    {
        char temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }
}

