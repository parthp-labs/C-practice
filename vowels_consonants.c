// Problem 14: Count Vowels and Consonants in a Word
// 🔸 Task:
// Write a C program that:

// Takes a word as input from the user (e.g., Programming).

// Counts the number of vowels and consonants in that word.

// Prints both counts.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

bool is_vowel(char character);

int main(void) {
    char* text = malloc(10 * sizeof(char));

    printf("Enter text:");
    scanf("%s", text);

    int vowels = 0;
    int consonants = 0;
    int length = strlen(text);
    for (int i=0;i<length;i++) {
        if (is_vowel(text[i])){
            vowels++;
        } else if (isalpha(text[i])) {
            consonants++;
        }
    }
    printf("Number of vowels:%i\n", vowels);
    printf("Number of consonants:%i", consonants);
    free(text);
}

bool is_vowel(char character) {
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    
    for(int i=0;i<5;i++) {
        if (tolower(character) == vowels[i]) {
            return true;
        }
    }

    return false;
}