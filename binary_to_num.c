#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    char binary[20];

    printf("Enter the binary: ");
    scanf("%s", binary);

    int length = strlen(binary);

    int number = 0;

    for (int i=length-1;i>=0;i--) {
        number += (int)(binary[i]-'0') * (2^i);
        printf("\n%i %i * %i", i, (int)(binary[i]-'0'), pow(2, i));
    }

    printf("\nNumber: %d", number);
    

    return 0;
}

