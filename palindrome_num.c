#include <stdio.h>
#include <string.h>

int main(void) {
    int original_num = 0;
    printf("Enter a number: ");
    scanf("%d", &original_num);
    
    int i = original_num;
    int reversed_num = 0;

    while (i!=0) {
        reversed_num = reversed_num * 10 + i % 10;
        i /= 10;
    }
    
    printf("Original: %i, Reversed: %i", original_num, reversed_num);
    
    if (original_num == reversed_num) {
        printf("\nPalindrome numbers");
    } else {
        printf("\nNot a palindrome numbers");
    }
    
}