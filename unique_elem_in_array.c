#include <stdio.h>

int main(void) {
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int numbers[size];

    printf("Enter %d numbers: ", size);
    for (int i=0;i<size;i++) {
        scanf("%d", &numbers[i]);
    }
    printf("Array: ");
    for (int i=0;i<size;i++) {
        printf("%d ", numbers[i]);
    }
    printf("\nUnique elements are: ");


    for (int i=0;i<size;i++) {
        int num = numbers[i];
        int unique = 0;
        for (int b=0;b<=i-1;b++) {
            if (num == numbers[b]) {
                unique = 1;
                continue;
            }
        }
        for (int a=i+1;a<size-1;a++) {
            if (num == numbers[a]) {
                unique = 1;
                continue;
            }
        }
        
        if (unique == 1) {
            continue;
        }
        printf(" %d", num);
    }
}