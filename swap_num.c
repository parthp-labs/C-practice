#include <stdio.h>

void swap(int* num1, int* num2);

int main(void) {
    int a = 10;
    int b = 20;

    printf("Before: a:%i, b:%i", a, b);
    swap(&a, &b);
    printf("\n");
    printf("After: a:%i, b:%i", a, b);

    return 0;
}

void swap(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}