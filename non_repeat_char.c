// Find the First Non-Repeating Character in a String
// 🔸 Task:
// Write a C program that:

// Takes a string as input from the user.

// Finds and prints the first character that does not repeat anywhere else in the string.

// If all characters repeat, print a message accordingly.
#include <stdio.h>
#include <string.h>

int main(void) {
    char text[] = "aabbccDDh";

    int freq[256] = {0};  // Assuming ASCII

    // Count frequency
    for (int i = 0; i < strlen(text); i++) {
        freq[(unsigned char)text[i]]++;
    }

    // Find first non-repeating character
    for (int i = 0; i < strlen(text); i++) {
        if (freq[(unsigned char)text[i]] == 1) {
            printf("First non-repeating character is: %c\n", text[i]);
            return 0;
        }
    }

    printf("All characters are repeating\n");
    return 0;
}
