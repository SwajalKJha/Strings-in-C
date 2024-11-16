#include <stdio.h>
#include <string.h>


void example_memcpy1();
void example_memcmp2();
void example_memset();
void example_bzero();

int main() {
    example_memcpy1();
    example_memcmp2();
    example_memset();
    example_bzero();
    
    return 0;
}
void example_memcpy1() 
{
    char src[100], dest[100];
    printf("Enter source string for memcpy: ");
    fgets(src, sizeof(src), stdin);
    src[strcspn(src, "\n")] = '\0';
    memcpy(dest, src, strlen(src) + 1);
    printf("Copied string (memcpy): %s\n", dest);
}

void example_memcmp2() 
{
    char str1[100], str2[100];
    printf("Enter first string for memcmp: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string for memcmp: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int result = memcmp(str1, str2, 100);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }
}

void example_memset() 
{
    char buffer[100];
    char fillChar;
    printf("Enter a character to fill the buffer: ");
    scanf(" %c", &fillChar);
    getchar(); 
    memset(buffer, fillChar, sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0'; 
    printf("Buffer filled with '%c': %s\n", fillChar, buffer);
}

void example_bzero() 
{
    char buffer[100];
    memset(buffer, 'X', sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0'; 
    bzero(buffer, sizeof(buffer));
    printf("Buffer after bzero: '%s' (should be empty)\n", buffer);
}
