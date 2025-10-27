#include <stdio.h>

#define PI 3.14159 // Define PI as a constant

int main() {
    float radius, area, circumference;

    // Get radius input from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = PI * radius * radius;

    // Calculate circumference
    circumference = 2 * PI * radius;

    // Print the results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}
