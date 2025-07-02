#include <stdio.h>

// Function to check if three sides can form a triangle
int is_valid_triangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// Function to prompt the user for a positive number with a label
double get_positive_number(const char* prompt) {
    double value;
    while (1) {
        printf("%s", prompt);
        if (scanf("%lf", &value) != 1 || value <= 0) {
            printf("Invalid input. Please enter a positive number.\n");
            while (getchar() != '\n'); // Clear input buffer
        } else {
            return value;
        }
    }
}

int main() {
    double side1, side2, side3;

    printf("Triangle Validator\n----------------------\n");

    while (1) {
        printf("\nEnter the lengths of the three sides of a triangle:\n");
        side1 = get_positive_number("-> Side 1: ");
        side2 = get_positive_number("-> Side 2: ");
        side3 = get_positive_number("-> Side 3: ");

        if (is_valid_triangle(side1, side2, side3)) {
            printf("\n Woohoo! These sides form a valid triangle.\n");
            break;
        } else {
            printf("\n Nope! These sides do NOT form a valid triangle. Try again!\n");
        }
    }

    printf("\n Program ended. Thanks for playing geometry detective!\n");

    return 0;
}
