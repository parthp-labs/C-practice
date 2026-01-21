#include <stdio.h>

int main(void) {
    int numbers[5] = {0};
    int divisor;

    for (int i=0;i<5;i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    printf("Enter number whose divisibility is to be checked: ");
    scanf("%d", &divisor);

    int num_of_divisible = 0;
    for (int i=0;i<5;i++) {
        if (numbers[i] % divisor == 0) {
            num_of_divisible++;
        }
    }
    printf("Count of numbers divisible by %d is %d\n", divisor, num_of_divisible);
    return 0;
}