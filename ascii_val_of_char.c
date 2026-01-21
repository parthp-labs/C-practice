// Find ASCII Value of a Character
// 🔸 Task:
// Write a C program that:
// Takes a single character as input from the user.
// Prints the ASCII value of that character.

#include <stdio.h>

int main(void) {
    char character;
    printf("Enter character:");
    scanf("%c", &character);
    printf("ASCII:%i", character);

    return 0;
}