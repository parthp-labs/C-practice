// Matrix Transpose
// 🔸 Task:

// Write a C program that:

// Takes a matrix (2D array) as input from the user (size m x n).

// Computes and prints its transpose (rows become columns, columns become rows).

// 🔍 Example:

// Input:

// Enter rows and columns: 2 3
// Enter matrix:
// 1 2 3
// 4 5 6


// Output:

// Transpose of matrix is:
// 1 4
// 2 5
// 3 6

#include <stdio.h>

int main(void) {    
    int rows = 0;
    int columns = 0;

    printf("Enter rows and columns (ex. 2 4): ");
    scanf("%i %i", &rows, &columns);
    
    if (rows <= 0) {
        printf("Rows should be greater than 0");
        return 1;
    } else if (columns <= 0) {
        printf("Rows should be greater than 0");
        return 1;
    }

    int matrix[rows][columns];

    for (int row=0;row<rows;row++) {    
        printf("Enter row %d of matrix:", row + 1);
        for (int col = 0; col < columns; col++) {
            scanf("%d", &matrix[row][col]);
            
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int row=0;row<rows;row++) {
        for (int col=0;col<columns;col++) {
            printf("%i ", matrix[row][col]);
        }
        printf("\n");
    }

    int new_matrix[columns][rows];

    for (int row=0;row<rows;row++) {
        for (int col=0;col<columns;col++) {
            new_matrix[col][row] = matrix[row][col];   
        }
    }   

    printf("Transpose Matrix:\n");
    for (int row=0;row<columns;row++) {
        for (int col=0;col<rows;col++) {
            printf("%i ", new_matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}