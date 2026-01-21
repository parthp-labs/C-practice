#include <stdio.h>

int main(void) {
    int num1 = 0;
    int num2 = 0;
    
    printf("num1:");
    scanf("%i", &num1);
    printf("num2:");
    scanf("%i", &num2);

    int sum = num1 + num2;
    int diff = num1 - num2;
    int product = num1 * num2; 
    int quotient = num1 / num2;

    printf("Sum:%i, Difference:%i, Product:%i, Quotient:%i", sum, diff, product,quotient);

    return 0;
}