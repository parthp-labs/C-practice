// Count Frequency of Each Character in a String
// 🔸 Task:
// Write a C program that:

// Takes a string input from the user.

// Counts and displays the frequency of each character in that string.

// Ignores spaces

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compute_frequency(char character);

char text_characters[50];
int ls_end=0;
int character_frequencies[50];

int main(void) {
    char *text = malloc(100 * sizeof(char));

    printf("Enter text:");
    scanf("%[^\n]s", text);

    for(int i=0;i<strlen((text));i++) {
        if (text[i] != ' ') {
            compute_frequency(text[i]);
        }
    }
    
    for (int i=0;i<ls_end;i++) {
        printf("Character:%c Occurrence:%i\n", text_characters[i], character_frequencies[i]);
    }

    free(text);

    return 0;
}

int compute_frequency(char character) {
    for(int i=0;i<ls_end;i++) {
        if (text_characters[i] == character) {
            character_frequencies[i] ++;
            return 0;
        }
    }
    text_characters[ls_end] = character;
    character_frequencies[ls_end] = 1;
    ls_end++;
}