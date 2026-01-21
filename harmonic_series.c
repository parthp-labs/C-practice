#include <stdio.h>

int main(void) {
    int n;
    float sum=0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i=1;i<=n;i++) {
        printf("1/%d, ", i);
        sum += (1.0/i);
    }
    printf("\nSum of series is %f\n", sum);

    return 0;
}