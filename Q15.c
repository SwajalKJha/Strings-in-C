#include <stdio.h>
#include <string.h>

void swap(void *a, void *b, size_t size);
int main() 
{
    int choice;
    printf("Choose the type of variable to swap:\n");
    printf("1. Integer\n");
    printf("2. Double\n");
    printf("3. String\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    getchar();

    if (choice == 1) 
    {
        int x, y;
        printf("Enter two integers:\n");
        printf("x = ");
        scanf("%d", &x);
        printf("y = ");
        scanf("%d", &y);
        printf("Before swap: x = %d, y = %d\n", x, y);
        swap(&x, &y, sizeof(int));
        printf("After swap: x = %d, y = %d\n", x, y);
    } 
    else if (choice == 2) 
    {
        double a, b;
        printf("Enter two doubles:\n");
        printf("a = ");
        scanf("%lf", &a);
        printf("b = ");
        scanf("%lf", &b);
        printf("Before swap: a = %.2f, b = %.2f\n", a, b);
        swap(&a, &b, sizeof(double));
        printf("After swap: a = %.2f, b = %.2f\n", a, b);
    } 
    else if (choice == 3) 
    {
        char str1[100], str2[100];
        printf("Enter two strings:\n");
        printf("str1 = ");
        fgets(str1, sizeof(str1), stdin);
        str1[strcspn(str1, "\n")] = '\0'; 
        printf("str2 = ");
        fgets(str2, sizeof(str2), stdin);
        str2[strcspn(str2, "\n")] = '\0'; 

        printf("Before swap: str1 = %s, str2 = %s\n", str1, str2);
        swap(str1, str2, sizeof(str1)); 
        printf("After swap: str1 = %s, str2 = %s\n", str1, str2);
    } 
    else 
    {
        printf("Invalid choice!\n");
    }

    return 0;
}
void swap(void *a, void *b, size_t size)
{
    unsigned char temp[size];
    // Copy data to temp
    memcpy(temp, a, size);
    // Copy data from b to a
    memcpy(a, b, size);
    // Copy data from temp to b
    memcpy(b, temp, size);
}

