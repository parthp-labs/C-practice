// 🧩 Temperature Converter (Celsius to Fahrenheit)
// 🔸 Task:
// Write a C program that:

// Takes a temperature in Celsius as input from the user.

// Converts it to Fahrenheit using the formula
// Prints the temperature in Fahrenheit.

#include <stdio.h>

int main(void) {
    float temperature;
    printf("Enter temperature in Celsius:");
    scanf("%f", &temperature);

    float f_temp = ((9.0/5.0) * temperature) + 32.0;
    printf("Temperature in Fahrenheit: %f F", f_temp);

    return 0;
}