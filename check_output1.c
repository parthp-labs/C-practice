#include <stdio.h>

int main()
{
    char op;
    double num1, num2, result;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // space before %c to skip newline
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2,result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2,result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2,result);
            break;
        case '/':
            if (num2 != 0) printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator!\n");
        }
    return 0;

}