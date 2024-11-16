#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int modifications = 0;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (islower(str[i])) {
                str[i] = toupper(str[i]);
                modifications++;
            }
            break; 
        }
    }
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && islower(str[i])) {
            str[i] = toupper(str[i]);
            modifications++;
        }
    }
    printf("After conversion, new string is: %s", str);
    printf("Modifications performed: %d\n", modifications);
    return 0;
}

