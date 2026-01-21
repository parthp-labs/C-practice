// 🧩 Problem 11: Sum of Digits of a Number
// 🔸 Task:
// Write a C program that:

// Takes an integer number as input from the user (e.g., 1234).

// Calculates the sum of its digits:

// 1+2+3+4=10
// Prints the result.


#include <stdio.h>
#include <stdlib.h>

int get_length(char *text) {
    int length = 0;

    int i=0;
    while (1) {
        if (text[i] != 0) {
            length++;
            i++;
        } else {
            break;
        }
    }

    return length;
}

int main(void) {
    char *number = malloc(100 * sizeof(char));

    printf("Enter number:");
    scanf("%s", number);

    int len = get_length(number);
    int sum = 0;
    for (int i=0;i<len;i++) {
        sum += (int) number[i] - '0';
    }
    printf("Sum of digits:%i", sum);

    free(number);
    return 0;
}