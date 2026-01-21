#include <stdio.h>

#define PI 3.14

int main (void){ 
    float radius, area, circumference;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area of circle with radius %.2f is %.2f and its circumference is %.2f\n", radius, area, circumference);
    return 0;  
} 