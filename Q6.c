#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char str[] = "Welcome to CDAC Pune"; 
    char reversed[MAX_LENGTH]; 
    int length = strlen(str); 
    int i, j = 0;

    for (i = length - 1; i >= 0; i--) {
        reversed[j++] = str[i]; 
    }
    reversed[j] = '\0';
    printf("Original String: %s\n", str);
    printf("Reversed String: %s\n", reversed);
    return 0;
}

