// Formatted Output
// 🔸 Task:
// Write a program that:

// Takes a floating-point number as input.

// Prints the number in three different formats using printf:

// With 2 decimal places

// In a field width of 10

// Both left-aligned and right-aligned

#include <stdio.h>

int main(void) {
    float num;
    printf("Enter number:");
    scanf("%f", &num);

    printf("%.2f\n", num);
    printf("%10f\n", num);
    printf("%-10f\n", num);

    return 0;
}