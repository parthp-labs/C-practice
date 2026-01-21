// Reverse a Number (Using Loop)
// 🔸 Task:
// Write a C program that:

// Takes an integer number as input from the user (e.g., 1234).

// Reverses the digits of the number (e.g., 4321).

// Prints the reversed number.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse(char* number);

int main(void) {
    char *number = malloc(100 * sizeof(char));

    printf("Enter number:");
    scanf("%s", number);
    printf("Reversed: %s", reverse(number));
    free(number);
    return 0;
}

char* reverse(char* number) {
    int length = strlen(number);

    for (int i=0;i<length/2;i++) {
        char left = number[i];
        char right = number[length-i-1];

        number[i] = right;
        number[length-i-1] = left;
    }

    return number;
}