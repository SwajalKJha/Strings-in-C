#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main()
{
    char input[MAX_SIZE];
    char output[MAX_SIZE];
    int j = 0;

    printf("Enter a string: ");
    fgets(input, MAX_SIZE, stdin);
    for (int i = 0; input[i] != '\0'; i++) 
    {
        if (isalpha(input[i])) 
        {
            output[j++] = input[i];
        }
    }
    output[j] = '\0';

    printf("Output: %s\n", output);
    return 0;
}

