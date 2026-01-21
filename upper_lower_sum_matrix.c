// Sum of Upper and Lower Triangular Matrix
// 🔸 Task
// Write a C program that:
// Takes a square matrix (n × n) as input.
// Computes and prints:
// The sum of the upper triangular elements (including the diagonal).
// The sum of element diagonal (including the diagonal).
// The sum of the lower triangular elements (including the diagonal).

#include <stdio.h>

int main(void) {
    int order = 0;
    printf("Order of matrix: ");
    scanf("%i", &order);

    int matrix[order][order];

    printf("Start entering matrix row by row %ix%i\n", order, order);
    for (int row=0;row<order;row++) {
        for (int col=0;col<order;col++) {
            scanf("%i", &matrix[row][col]);
        }
    }
    
    int upper_sum = 0;
    int lower_sum = 0;
    int diagonal_sum = 0;

    for (int row=0;row<order;row++) {
        for (int col=0;col<order;col++) {
            if (row != col) {
                if (col > row) {
                    upper_sum += matrix[row][col];
                } else {
                    lower_sum += matrix[row][col];
                }
            } else {
                diagonal_sum += matrix[row][col];
            }
        }
    }
    printf("Upper triangle sum: %i\n", upper_sum);
    printf("Diagonal sum: %i\n", diagonal_sum);
    printf("Lower triangle sum: %i", lower_sum);

    return 0;
}
