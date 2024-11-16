#include <stdio.h>
int string_length(const char *str_arr1);
char *string_copy(char *str_arr2, const char *str_arr1, int length);
int string_compare(const char *str_arr1, const char *str_arr2);


int main()
{
    char str_arr1[20] = "CDAC-ACTS-PUNE";
    char str_arr2[30];  
    
    int length = string_length(str_arr1);
    string_copy(str_arr2, str_arr1, length);
    printf("Length of Array 1: %d\n", length);
    
    for (int i = 0; str_arr1[i] != '\0'; i++) 
    {
        if (str_arr1[i] == '\n') 
        {
            str_arr1[i] = '\0';
            break;
        }
    }
    for (int i = 0; str_arr2[i] != '\0'; i++) 
    {
        if (str_arr2[i] == '\n') 
        {
            str_arr2[i] = '\0';
            break;
        }
    }
    
        printf("Array 1: \"%s\" \n", str_arr1);
        printf("Array 2: \"%s\" \n", str_arr2);
        if (string_compare(str_arr1, str_arr2) == 0) 
    	{
		printf("Arrays: \"%s\" and \"%s\" match.\n", str_arr1, str_arr2);
	} 
	else 
	{
		printf("Arrays: \"%s\" and \"%s\" do not match.\n", str_arr1, str_arr2);
	}
        
    return 0;  
}

int string_length(const char *str_arr1)
{
    int length = 0;
    while (*str_arr1 != '\0')
    {
        length++;
        str_arr1++;
    }
    return length;
}

char *string_copy(char *str_arr2, const char *str_arr1, int length) 
{
    int i = 0;
    for (i = 0; i < length && str_arr1[i] != '\0'; i++) {
        str_arr2[i] = str_arr1[i];
    }
    str_arr2[i] = '\0';  
    return str_arr2;
}

int string_compare(const char *str_arr1, const char *str_arr2) 
{
    while (*str_arr1 != '\0' && *str_arr2 != '\0') 
    {
        if (*str_arr1 != *str_arr2) 
        {
            return (unsigned char)(*str_arr1) - (unsigned char)(*str_arr2);
        }
        str_arr1++;
        str_arr2++;
    }
    return (unsigned char)(*str_arr1) - (unsigned char)(*str_arr2);
}
