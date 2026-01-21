#include <stdio.h>

int main(void) {
    float marks = 0;

    printf("Enter your marks: ");
    scanf("%f", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("A Grade");
    } else if (marks >= 75 && marks <= 89) {
        printf("B Grade");
    } else if (marks >= 50 && marks <= 74) {
        printf("C Grade");
    } else if (marks < 50) {
        printf("F Grade");
    }
    return 0;
}