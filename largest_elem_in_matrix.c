#include <stdio.h>

int main(void) {
    int matrix[3][3] = {0};

    for (int row=0;row<3;row++) {
        for (int col=0;col<3;col++) {
            printf("Enter number for row: %d column: %d): ", row+1, col+1);
            scanf("%d", &matrix[row][col]);
        }
    }

    int largest = matrix[0][0];
    for (int row=0;row<3;row++) {
        for (int col=0;col<3;col++) {
            if (largest < matrix[row][col]) {
                largest = matrix[row][col];
            }
        }
    }
    printf("Largest number in the matrix is %d\n", largest);
    return 0;
}