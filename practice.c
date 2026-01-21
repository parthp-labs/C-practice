#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main (void) {
    char file_path[20];
    printf("Enter the file path to open: ");
    scanf("%s", file_path);

    FILE* file = fopen(file_path, "r+");
    if (file == NULL) {
        printf("Unable to open the file");
        return 1;
    }

    while (1) {
        char operation;
        printf("\n\na: Read file");
        printf("\nb: Write to file");
        printf("\nEnter operation: ");
        scanf(" %c", &operation);
        printf("\nSelected operation: %c", operation);
        if (operation != 'a' && operation != 'b') {
            printf("Please enter valid operation");
            continue;
        }

        if (operation == 'a') {
            char data[100];
            
            printf("\nFile content:\n");
            while (fgets(data, 100, file) != NULL) {
                printf("\t%s", data);
            };
        } else if (operation == 'b') {
            char data[100];
            printf("\nEnter the data to be inserted: ");
            scanf(" %s", data);

            fputs(data, file);
        }
    }

    return 0;
}
