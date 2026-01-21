// Remove All Spaces from a String
// 🔸 Task:
// Write a C program that:

// Removes all whitespace characters (spaces, tabs, etc.).

// Prints the cleaned string without spaces.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char text[] = "HEllo world i  \n      am david";

    printf("Cleaned string: ");
    for (int i=0;i<strlen(text);i++) {
        if (!isspace(text[i])) {
            printf("%c", text[i]);
        }
    }

    return 0;
}