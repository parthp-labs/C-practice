// Convert All Lowercase Letters to Uppercase in a String
// 🔸 Task:
// Write a C program that:
// Takes a string input from the user.
// Converts all lowercase letters (a–z) to their uppercase equivalents (A–Z).
// Prints the updated string.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[] = "Hello WORLD I am David";

    printf("Before Text:%s\n", text);
    for (int i=0;i<strlen(text);i++) {
        if (97 <= text[i] && text[i] <= 122) {
            text[i] = text[i] - 32;
        }
    }
    printf("After Text:%s", text);

    return 0;
}