// Check Even or Odd
// 🔸 Task:
// Write a program that:

// Takes an integer number as input from the user.

// Checks whether the number is even or odd.

// Prints the result accordingly.


#include <stdio.h>

int main(void) {
    int num;
    printf("Enter the number:");
    scanf("%i", &num);

    if ((num % 2) == 0 ){
        printf("Number is even");
    } else {
        printf("Number is odd");
    }

    return 0;
}