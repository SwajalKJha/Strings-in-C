#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Enter one number for a command-line argument.\n");
        return 1;
    }

    double sum = 0.0;
    for (int i = 1; i < argc; i++) {
        double num = atof(argv[i]);
        sum += num; 
    }

    double average = sum / (argc - 1); 
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}

