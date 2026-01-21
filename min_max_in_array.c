#include <stdio.h>

int main(void) {
    int array[5] = {0};

    for (int i=0;i<5;i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &array[i]);
    }

    int min = array[0];
    int max = array[0];

    for (int i=1;i<5;i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    printf("Minimum is %d\n", min);
    printf("Maximum is %d\n", max);

    return 0;
}