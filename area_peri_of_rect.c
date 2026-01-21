// Area and Perimeter of a Rectangle
// 🔸 Task:
// Write a program that:
// Takes length and breadth of a rectangle as input.
// Calculates:
// Area = length × breadth
// Perimeter = 2 × (length + breadth)
// Prints both results.

#include <stdio.h>

int main(void) {
    float w = 0;
    float h = 0;

    printf("Height:");
    scanf("%f", &h);
    printf("Width:");
    scanf("%f", &w);
    printf("Area:%f Perimeter:%f", w*h, 2*(w+h));
}