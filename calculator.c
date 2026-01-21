#include <stdio.h>

int main(void) {
    char operations;
    int num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operations);
    printf("Enter two operands: ");
    scanf("%d %d", &num1, &num2);
    switch (operations) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}