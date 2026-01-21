// Multiple Inputs in One Line
// 🔸 Task:
// Write a program that:

// Takes three inputs in a single line using scanf:

// A string (name)

// An integer (age)

// A float (marks)

// Prints all three values using a single printf statement.

#include <stdio.h>

int main(void) {
    char name[100];  // Use an array to store the name
    int age;
    float marks;

    printf("Enter name, age, and marks: ");
    scanf("%s %d %f", name, &age, &marks);  // Single-line input

    printf("Name: %s, Age: %d, Marks: %f", name, age, marks);

    return 0;
}