// Find the Greatest of Three Numbers
// 🔸 Task:
// Write a C program that:

// Takes three integers as input from the user.

// Determines the greatest (largest) of the three numbers.

// Prints the largest number.

#include <stdio.h>

int main(void)
{
    int numbers[] = {10, -91, 23, 54, 65};

    int largest = numbers[0]; // set to first element so that code also works when all are negative
    for(int i=0;i<5;i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    printf("Largest Number is: %i", largest);

    return 0;
}
