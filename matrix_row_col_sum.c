#include <stdio.h>

int main(void) {
    int matrix[3][3] = {0};

    for (int row=0;row<3;row++) {
        for (int col=0;col<3;col++) {
            printf("Enter number for row: %d column: %d): ", row+1, col+1);
            scanf("%d", &matrix[row][col]);
        }
    }

    int row_sums[3] = {0};
    int col_sums[3] = {0};
    for (int row=0;row<3;row++) {
        for (int col=0;col<3;col++) {
            row_sums[row] += matrix[row][col];
            col_sums[col] += matrix[row][col];
        }
    }
    for (int i=0;i<3;i++) {
        printf("Sum of row %d is %d\n", i+1, row_sums[i]);
        printf("Sum of column %d is %d\n", i+1, col_sums[i]);
    }
    
    return 0;
}