#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

bool is_armstrong_num(int number);

int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);  // ✅ You were using hardcoded value before

    if (is_armstrong_num(number)) {
        printf("It is an Armstrong number\n");
    } else {
        printf("It is NOT an Armstrong number\n");
    }

    return 0;
}

bool is_armstrong_num(int number) {
    char text_num[20];
    sprintf(text_num, "%d", number);

    int len = strlen(text_num);
    int sum = 0;

    for (int i = 0; i < len; i++) {
        int digit = text_num[i] - '0';

        sum += (int) round(pow((double) digit, (double) len));
    }

    printf("Sum: %d\n", sum);

    return sum == number;
}
