// Matrix Multiplication
// 🔸 Task

// Write a C program that:
// Takes two matrices as input from the user.
// Multiplies them (if dimensions are compatible).
// Prints the resulting product matrix.

// 🔍 Rules & Notes
// If Matrix A has size (m × n) and Matrix B has size (p × q), multiplication is possible only if n == p.
// Resultant matrix will have size (m × q).

#include <stdio.h>

int main(void) {    
    int matrix1_rows;
    int matrix1_columns;
    int matrix2_rows;
    int matrix2_columns;

    printf("1st Matrix:\n");
    printf("Enter rows and columns (ex. 2 4): ");
    scanf("%i %i", &matrix1_rows, &matrix1_columns);

    int matrix1[matrix1_rows][matrix1_columns];
    printf("Enter first matrix:\n");
    for (int row=0;row<matrix1_rows;row++) {    
        for (int col = 0; col < matrix1_columns; col++) {
            scanf("%i", &matrix1[row][col]);
        }    }

    printf("2nd Matrix:\n");
    printf("Enter rows and columns (ex. 2 4): ");
    scanf("%i %i", &matrix2_rows, &matrix2_columns);

    if (matrix1_columns != matrix2_rows) {
        printf("Matrix multiplication not possible (columns of A ≠ rows of B)\n");
        return 1;
    }

    int matrix2[matrix2_rows][matrix2_columns];
    printf("Enter second matrix:\n");
    for (int row=0;row<matrix2_rows;row++) {    
        for (int col = 0; col<matrix2_columns; col++) {
            scanf("%i", &matrix2[row][col]);
        }
    }
    
    int resultant_matrix[matrix1_rows][matrix2_columns];
    for (int row=0;row<matrix1_rows;row++) {
        for (int col=0;col<matrix2_columns;col++) {
            int sum = 0;

            for (int i=0;i<matrix1_columns;i++) {
                sum += matrix1[row][i]*matrix2[i][col];
            }
            resultant_matrix[row][col] = sum;
        }
    }

    printf("Resultant Matrix (Matrix1 x Matrix2):\n");
    for (int row=0;row<matrix1_rows;row++) {    
        for (int col = 0; col < matrix2_columns; col++) {
            printf("%4d ", resultant_matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}