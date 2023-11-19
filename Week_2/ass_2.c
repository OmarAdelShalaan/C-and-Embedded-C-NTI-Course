#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
