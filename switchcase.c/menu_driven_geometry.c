#include <stdio.h>

int main() {
    int choice;
    float radius, length, width, side, area;
    const float PI = 3.14159;

    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Square\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;
        case 2:
            printf("Enter length and width of rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of Rectangle = %.2f\n", area);
            break;
        case 3:
            printf("Enter side length of square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square = %.2f\n", area);
            break;
        default:
            printf("Invalid selection\n");
            break;
    }

    return 0;
}
