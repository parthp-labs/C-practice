#include <stdio.h>

int main(void) {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d, ", i * i);
        sum += i * i;
    }
    printf("\nSum of squares is %d\n", sum);

    return 0;
}