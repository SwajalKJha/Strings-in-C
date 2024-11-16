#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_SIZE 50

int isValidName(const char *name);
int main() 
{
    char name[MAX_SIZE];
    while (1) 
    {
        printf("Enter your first name: ");
        fgets(name, MAX_SIZE, stdin);
        name[strcspn(name, "\n")] = '\0';
        if (isValidName(name)) 
        {
            printf("Name is \"%s\"\n", name);
            break;
        } else 
        {
            printf("Incorrect name, try again.\n");
        }
    }
    return 0;
}
int isValidName(const char *name) 
{
    for (int i = 0; name[i] != '\0'; i++) 
    {
        if (!isalpha(name[i])) 
        {
            return 0;
        }
    }
    return 1;
}

