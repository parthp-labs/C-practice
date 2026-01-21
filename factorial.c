#include <stdio.h>

int main(void) {
    int number;
    long long int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Cannot find factorial of negative numbers.\n");
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
    }
    printf("Factorial is %lld\n", factorial);

    return 0;
}