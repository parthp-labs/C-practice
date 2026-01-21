// Extended: Matrix Operations (Add, Subtract, Multiply, Divide)
// 🔸 Task:
// - Take two matrices of the same size (m × n) as input from the user.
// - Perform element-wise addition, subtraction, multiplication, and division.
// - Print the resulting matrices.

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
        printf("Columns should be greater than 0");
        return 1;
    }

    int first_matrix[rows][columns];
    int second_matrix[rows][columns];

    printf("Enter first matrix:\n");
    for (int row=0;row<rows;row++) {    
        for (int col = 0; col < columns; col++) {
            scanf("%d", &first_matrix[row][col]);
        }
    }

    printf("Enter second matrix:\n");
    for (int row=0;row<rows;row++) {    
        for (int col = 0; col < columns; col++) {
            scanf("%d", &second_matrix[row][col]);
        }
    }

    int resultant_sum_matrix[rows][columns];
    int resultant_sub_matrix[rows][columns];
    int resultant_div_matrix[rows][columns];

    for (int row=0;row<rows;row++) {
        for (int col=0;col<columns;col++) {
            resultant_sum_matrix[row][col] = first_matrix[row][col] + second_matrix[row][col];
            resultant_sub_matrix[row][col] = first_matrix[row][col] - second_matrix[row][col];
            resultant_div_matrix[row][col] = first_matrix[row][col] / second_matrix[row][col];
        }
    }

    printf("\nResultant Matrix (Sum):\n");
    for (int row=0;row<rows;row++) {    
        for (int col = 0; col < columns; col++) {
            printf("%i ", resultant_sum_matrix[row][col]);
        }
        printf("\n");
    }
    printf("\nResultant Matrix (Subtraction):\n");
    for (int row=0;row<rows;row++) {    
        for (int col = 0; col < columns; col++) {
            printf("%i ", resultant_sub_matrix[row][col]);
        }
        printf("\n");
    }
    printf("\nResultant Matrix (Division):\n");
    for (int row=0;row<rows;row++) {    
        for (int col = 0; col < columns; col++) {
            printf("%i ", resultant_div_matrix[row][col]);
        }
        printf("\n");
    }


    return 0;
}