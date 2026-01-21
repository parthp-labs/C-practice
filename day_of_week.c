#include <stdio.h>

int main (void) {
    int day;

    printf("Enter day number: ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Please enter a number between 1 and 7 to get the day of week.");
    }
    return 0;
}