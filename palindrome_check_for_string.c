// 🧩 Problem 13: Check if Number is a Palindrome
// 🔸 Task:
// Write a C program that:

// Takes a number as input from the user (e.g., 12321).

// Checks whether the number is a palindrome:

// A number is a palindrome if it reads the same forward and backward.

// Examples:
// 121 → Palindrome ✅
// 123 → Not a palindrome ❌
// 4444 → Palindrome ✅
// Prints "Palindrome" or "Not a Palindrome" accordingly.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool check_palindrome(char* text);

int main(void) {
    char* text = malloc(10 * sizeof(char));

    printf("Enter text:");
    scanf("%s", text);
    
    bool is_palindrome = false;
    is_palindrome = check_palindrome(text);

    if (is_palindrome) {
        printf("Your text is palindrome");
    } else {
        printf("Your text is not palindrome");
    }

    free(text);
    return 0;
}

bool check_palindrome(char* text) {
    int length = strlen(text);

    for (int i=0;i<=length/2;i++) {
        if (text[i] != text[length-i-1]) {
            return false;
        }
    }

    return true;
}