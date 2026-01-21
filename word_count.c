// Count Words in a Sentence
// 🔸 Task:
// Write a C program that:

// Takes a full sentence as input from the user.

// Counts the number of words in the sentence.

// A word is defined as a sequence of characters separated by spaces.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[] = "  Hello WORLD I am David";

    int in_word = 0;
    int words = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ' && in_word == 0) {
            in_word = 1;
            words++;
        } else if (text[i] == ' ') {
            in_word = 0;
        }
    }
    printf("Number of words are: %i", words);
    return 0;
}