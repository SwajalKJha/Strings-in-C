#include <stdio.h>
#include <string.h>

int main() {
    int sourceArray[100], destinationArray[100];
    int n, i;

    printf("Enter the number of elements in the array (max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &sourceArray[i]);
    }
    memcpy(destinationArray, sourceArray, n * sizeof(int));

    printf("Copied array elements:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", destinationArray[i]);
    }
    printf("\n");

    return 0;
}

