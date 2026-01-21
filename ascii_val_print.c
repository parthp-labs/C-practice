// Print All ASCII Values from 0 to 127
// 🔸 Task:
// Write a C program that:

// Prints all ASCII characters and their corresponding integer values from 0 to 127.

// Each line should show:
// ASCII Code: <number> => Character: <symbol>


#include <stdio.h>

int main(void) {
    for (int i=0;i<=127;i++) {
        printf("ASCII Code: %i -> %c\n", i, i);
    }
}