// Check if Two Strings are Anagrams
// 🔸 Task:
// Write a C program that:
// Takes two strings as input from the user.
// Checks if they are anagrams of each other.

// 🧠 An anagram is a word or phrase formed by rearranging the letters of another, using all the original letters exactly once.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool is_anagram(char *text1, char *text2);

int main(void) {
    char *text1 = malloc(10 * sizeof(char));
    char *text2 = malloc(10 * sizeof(char));

    printf("Enter 1st text: ");
    scanf("%s", text1);
    printf("Enter 2nd text: ");
    scanf("%s", text2);

    bool ans = is_anagram(text1, text2);

    if (ans) {
        printf("Both text are anagram.");
    } else {
        printf("Both text are not anagram");
    }

    free(text1);
    free(text2);
    return 0;
}

bool is_anagram(char *text1, char * text2){ 
    if (strlen(text1) != strlen(text2)) {
        return false;
    }

    int characters1[256] = {0};
    int characters2[256] = {0};

    for (int i=0;i<strlen(text1);i++) {
        if (text1[i] != '\0') {
            int c = text1[i];
            characters1[c] += 1;
        }
    }

    for (int i=0;i<strlen(text2);i++) {
        if (text2[i] != '\0') {
            int c = text2[i];
            characters2[c] += 1;
        }
    }

    for (int i=0;i<256;i++){
        if (characters1[i] != characters2[i]) {
            return false;
        }
    } 

    return true;
}