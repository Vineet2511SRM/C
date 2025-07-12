#include <stdio.h>
#include <math.h>

int main() {
    float radius, area;

    printf("Circle Area Calculator\n");
    printf("----------------------------\n");

    // Input with validation
    printf("Enter the radius of the circle: ");
    if (scanf("%f", &radius) != 1 || radius <= 0) {
        printf("Invalid input! Radius must be a positive number.\n");
        return 1;
    }

    area = M_PI * radius * radius;

    printf("Radius entered: %.2f units\n", radius);
    printf("Area of the circle: %.2f square units\n", area);

    return 0;
}
