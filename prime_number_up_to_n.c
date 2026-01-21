// Print All Prime Numbers Up to N
// 🔸 Task:
// Write a C program that:

// Takes an integer n as input from the user.

// Prints all prime numbers from 2 to n.

// 🔍 Reminder (Prime Definition):
// A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.


#include <stdio.h>
#include <math.h>

int main(void) {
    int n = 0;

    printf("Enter value of N: ");
    scanf("%i", &n);
    printf("Prime numbers till %i are: ", n);

    for (int i=2;i<=n;i++) {
        int is_prime = 1;
        for (int a=2;a<=(int)sqrt(i);a++) {
            if (i%a == 0) {
                is_prime = 0;
                break;
            }
            
        }

        if (is_prime == 1) {
            printf("%i,", i);
        }
    }

    return 0;
}